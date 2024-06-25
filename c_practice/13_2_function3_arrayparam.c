/*배열을 인자로 받아들이는 함수*/
#include <stdio.h>

int add_number(int *parr);
int main(){
  int arr[3];
  int i;

  /*사용자로 부터 3개의 원소를 입력받는다*/
  for (i=0; i<3; i++){
    scanf("%d", &arr[i]);
    }
  add_number(arr);
  // arr = &arr[0] 와 마찬가지 

  printf("배열의 각 원소 : %d, %d, %d", arr[0], arr[1], arr[2]);
  return 0;
}

int add_number(int *parr){
  int i;
  for (i=0; i<3; i++){
    parr[i]++;
  }
  return 0;
}