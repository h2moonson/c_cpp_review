#ifndef __OPTIMAL_THROTTLE_H__
#define __OPTIMAL_THROTTLE_H__


#include <vector>
#include <string>
// typedef 'enum' 타입에 새로운 별칭을 붙일 수 있음
// typedef enum{} EventType;으로 쓰면서
// EventType
typedef enum { 
    DRIVE = 1,
    
    STOP = 4,
    STOP_LINE = 5,
    STOP_PARKING = 6,
    STOP_DELIVERY = 7,
    
    DECEL = 8,
    DECEL_U_TURN_START = 9,
    DECEL_U_TURN_END = 10,
    DECEL_SPEED_BUMP_START = 11,
    DECEL_SPEED_BUMP_END = 12
} EventType;
//EventType::STOP 이런식으로 접근 가능 
// EventType event = STOP; 
//과거 C언어에서 enum사용하려면 enum EventType event = STOP; 

//#########네임스페이스 충돌 예시###############//
enum TrafficSignal {
    STOP,
    GO
};

enum EventType {
    STOP = 4,
    DRIVE = 1
};

EventType event = STOP;  // 혼동이 발생할 수 있음
//#########네임스페이스 충돌 예시###############//


namespace TrafficLightStatus {
    const std::string RED3 = "3red";
    const std::string YELLOW3 = "3yellow";
    const std::string GREEN3 = "3green";
    const std::string RED4 = "4red";
    const std::string RED_LEFT4 = "4redleft";
    const std::string YELLO4 = "4yellow";
    const std::string RED_YELLO4 = "4redyellow";
    const std::string GREEN_LEFT4 = "4greenleft";
    const std::string GREEN4 = "4green";
    const std::string NONE = "";
};

struct EventPlaceInfo {
public: //구조체의 멤버변수는 public이기 때문에 x, y, type에 직접 접근 가능 
    double x, y;
    EventType type;

    EventPlaceInfo(const double& _x, const double& _y, const EventType& _type) {
        x = _x;
        y = _y;
        type = _type;
    }
};

class EventPlaceInfoManager {
// 클래스의 기본 접근 제어자는 private이다. 클래스에 선언된 멤버변수와 메서드는 기본적으로 외부에서 접근 x 
public:
    EventPlaceInfo& getCurrEventPlaceInfo() {
        return *iter;
    }

    bool nextEventPlaceInfo() {
        if(iter == event_place.end()) return false;
        *iter++;
        return true;
    }

    double calcCurrPoseToEventPlaceDist(const geometry_msgs::Pose& curr_pose){
        double ret = pow(curr_pose.position.x - getCurrEventPlaceInfo().x, 2);
        ret += pow(curr_pose.position.y - getCurrEventPlaceInfo().y, 2);
        return sqrt(ret);
    }

private:
    std::vector<EventPlaceInfo> event_place = {
        EventPlaceInfo(935605.5229525702, 1916237.7215878346, EventType::DECEL_U_TURN_START),
        EventPlaceInfo(935606.6226086909, 1916233.8976573267, EventType::DECEL_U_TURN_END),
        EventPlaceInfo(935553.563431156, 1915885.7205370162, EventType::STOP)
    };

    std::vector<EventPlaceInfo>::iterator iter = event_place.begin();
};

class OptimalThrottle
{
public:
    const double DISTANCE = 20.0;
    const double STOP_TIME = 3.0;
    const double MAX_VELOCITY = 20.0;
    const double DECEL_VELOCITY = 5.0;

    // ns를 s단위로 바꾸기 위함
    const double NANO_TO_SEC = 1000000000.0;

    bool shouldStop, shouldDecel;
    double throttle;

    EventPlaceInfoManager eventPlaceInfoManager;
    geometry_msgs::Pose eventPose;

public:
    double calcTanhVelocity(geometry_msgs::Pose curr_pose);
    double calcLinearVelocity(geometry_msgs::Pose curr_pose);
};

#endif