from enum import Enum, auto
from collections import namedtuple

class Lane(Enum):
    ONE = auto()
    TWO = auto()
    
class EventPlace(Enum):
    STOP_LINE = auto()
    
    U_TURN = auto()
    SPEED_BUMP = auto()


class Constant:
    def __setattr__(self, name, value):
        if name in self.__dict__:
            raise Exception('변수에 값을 할당할 수 없습니다.')
        self.__dict__[name] = value

    def __delattr__(self, name):
        if name in self.__dict__:
            raise Exception('변수를 삭제할 수 없습니다.')
        
const = Constant()

# 이 값은 optimal_velocity 에서 가져다 쓰는 함수에 따라 다름

const.AVOIDANCE_SUCCESS_RAIDUS = 3.0
const.OBSTACLE_RAIDUS = 2.0
const.BLOCK_CHECK_LD = 8.0
const.LANE_WIDTH = 3.5
const.LANE_WIDTH_SMALL = 1.75
const.EVENT_THRESHOLD_DIST = 10.0



#######코드 설명 ##############

#     이 메서드는 객체의 속성에 값을 할당할 때 호출됩니다.
#     name은 설정하려는 속성의 이름이고, value는 할당하려는 값입니다.
#     이 메서드는 속성의 값을 이미 한 번 설정한 이후에는 다시 값을 할당할 수 없도록 합니다.
#     객체의 __dict__는 해당 객체의 모든 속성을 담고 있는 딕셔너리입니다. 만약 속성이 이미 __dict__에 존재한다면, 예외를 발생시켜서 값을 재할당하지 못하도록 합니다.
#     처음 속성을 설정할 때는 이 제약이 없으므로, 초기 할당은 허용됩니다.

# __delattr__ Method

#     이 메서드는 객체의 속성을 삭제할 때 호출됩니다.
#     특정 속성을 삭제하려고 할 때, 해당 속성이 __dict__에 존재한다면 예외를 발생시켜서 속성을 삭제하지 못하도록 합니다.
