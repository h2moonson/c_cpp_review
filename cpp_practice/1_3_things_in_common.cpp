// C++의 for 문 
#include <iostream>

int main(){
    int i; 
    for (i = 0; i < 10; i++){
        std::cout << i << std::endl;
    }
    //C++은 변수 선언을 사용하기 직전 어느 위치에서 든지 선언 가능
    for (int j = 0; j <10 ;j++){
        std::cout<< "this is j"<<j<<std::endl;
    }
    return 0;
}

