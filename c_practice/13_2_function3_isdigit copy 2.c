#include<stdio.h>
int find_max(int *parr);
void remove_element(int *parr, int size, int value);
int main(){
  int i;
  int array[10];
  for (i=0; i<10; i++){
    scanf("%d", &array[i]);          
  }
  for (i=0; i<10; i++){
    int max = find_max(array); //최대값 찾고
    printf("%d", max);
    remove_element(array, 10-i, max);
  }

  return 0;
}
int find_max(int *parr){
  int new_array[10];
  int max = parr[0];
  
  for (int i = 1; i<10; i++){
    if (max <= parr[i]) {max = parr[i];}
  }
  return max;
}
void remove_element(int *parr, int size, int value){
  int i, j;
  for (i=0; i<size; i++){
    if (parr[i] == value){
      for (j=i; j<size -1;j++){
        parr[j] = parr[j+1]; //한칸씩 앞으로 이동
      } 
      break;
    }
  }
}