#include<stdio.h>
int main(){
  char input;
  scanf("%c", &input); //%c라서 숫자 한 글자만 받아짐, scanf는 &를 통해 input변수의 주소값을 받아와서 그곳에 값 할당
  printf("주소값은 %p \n", &input); //printf는 형식 지정가 없으면 인수 출력 x >%p써야함
  printf("\n");
  if (48 <= input && input <= 57){
    printf("%c는 숫자입니다 \n", input);
  } else{
    printf("%c 는 숫자가 아닙니다 \n", input);
  }
  return 0;
}