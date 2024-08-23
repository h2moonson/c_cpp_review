//https://boycoding.tistory.com/179
//C++자료형 enum : 사용자 정의 자료형
//enumerate : 열거하다, 낱낱이 세다
//enum = enumerated type = '열거형' 정수형, 실수형 과 같은 열거'형'
#include <iostream>
enum Color 
{
    COLOR_BLACK, //기본값 0
    COLOR_RED, //기본값1
    COLOR_BLUE, //기본값2  
    COLOR_GREEN, 
    COLOR_WHITE,
    COLOR_CYAN,
    COLOR_YELLOW,
    COLOR_MAGENTA
}; //enum자체는 세미콜론으로 끝나야 함 

enum class Week {
    MON,
    TUES,
    WED
};
int main(){
    //열거형 Color의 변수들을 정의
    Color paint= COLOR_WHITE; //int x = 5;와 같은 방식 >> 열거자가 global namespace에 있기에 바로 COLOR_WHITE로 넣을 수 있음
    Color house(COLOR_BLUE); //house라는 이름의 변수를 color타입으로 선언, 생성자 방식으로 COLOR_BLUE값을 초기화
                            //house라는 변수는 'COLOR_BLUE값을 가짐
    Color apple{COLOR_RED}; //C++11에서 도입된 안전한 초기화를 위한 방식
    std::cout<<paint;
    std::cout<<house;
    std::cout<<apple;
    return 0;
}