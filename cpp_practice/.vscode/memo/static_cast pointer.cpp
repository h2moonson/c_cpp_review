#include <iostream>

int main() {
    double* dou = new double(10.1234);
    int* integer_1 = dou;    //묵시적 형변환
    int* integer_2 = (int*)dou;   //명시적 형변환 
    int* integer_3 = static_cast<int*>(dou); //static_cast 형변환
    
    printf("%d\n%d\n%d\n", integer_1, integer_2, integer_3);

    return 0;
}

/* 명시적 형변환 한 애만 출력되지만 올바른 값도 아님! 문제있음 디버깅도 어려움*/