/*드디어 써먹는 포인터*/

/*
포인터는 특정한 메모리 상의 주소값을 저장하는 변수로,
int형을 저장하면 int*, char면 char* 형태로 선언된다
*단항 연산자를 이용해서 자신이 가리키는 변수를 지칭할 수 있고
&연산자를 이용해서 특정한 변수의 주소값을 알아낼 수 있다.
*/

//Q. 다른 함수에서 정의된 변수의 값을 어떻게 바꾸나? 

#include <stdio.h>
int change_val(int *pi){
    printf("----- change_val 함수 안에서 -------\n");
    printf("pi의 값이자 메모리: %p \n", pi);
    printf("pi가 가리키는 값: %d \n", *pi);
    
    *pi = 3;

    printf("----- change_val 함수 끝! ----\n");
    printf("pi의 값이자 메모리: %p \n", pi);
    return 0;
}
int main(){
    int i = 0;
        
    printf("i 변수의 주소값 : %p \n", &i);
    printf("호출 이전 i 의 값 : %d \n", i);
    change_val(&i); //포인터로 받기 위해서는 애초에 넘겨줄 때 주소값을 넘겨줘야함
    printf("호출 이후 i 의 값 : %d \n", i);

    return 0;
  }
