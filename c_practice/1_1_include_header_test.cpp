#include "header1.h"
namespace header1 {
    int func(){
        foo(); //자기 자신이 포함되어 있는 이름 공간에서는 굳이 앞에 이름 명시x
    }
}
int main(){
    header1::foo();
}

//매번 ::가 귀찮다면 
using header1::foo; //라인 추가
using namespace header1; //아예 통째로 가져올 수도 있음 

#include <iostream>
using namespace std; // std::cout, std::endl이 귀찮다면
// 하지만!!!!!!! 권장하지 않음 