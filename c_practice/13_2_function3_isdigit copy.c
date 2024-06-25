// 함수를 사용하는 경우는 
#include<stdio.h>
int isdigit(char c);
int main(){
  char input;
  scanf("%c", &input); //%c라서 숫자 한 글자만 받아짐, scanf는 &를 통해 input변수의 주소값을 받아와서 그곳에 값 할당
  printf("주소값은 %p \n", &input); //printf는 형식 지정가 없으면 인수 출력 x >%p써야함
  printf("\n");
  if (isdigit(input)){
    printf("%c 는 숫자 입니다 \n", input);
  }
  else {printf("error");}
  return 0;
}
int isdigit(char c){
  if (48 <= c && c <= 57){
    return 1;
  } else{
    return 0;
  }

}