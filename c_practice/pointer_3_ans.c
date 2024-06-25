/* Q. 왜 굳이 parr 로 따로 선언해? arr를 증가시켜셔 *(arr)로 쓰면 안돼? */
#include <stdio.h>
int main(){
    int arr[10] = {100, 98, 97 };
    arr++;
    return 0;

}