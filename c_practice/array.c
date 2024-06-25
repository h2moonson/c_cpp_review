// (배열의 형) (배열이름)[원소개수];
#include <stdio.h> 

// 1. 기본 배열 구조
// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};

//     printf("Array 6번째원소 : %d \n", arr[6]); //7번째 값을 출력하려고 하면 dummy 값이 나옴 
//     return 0;
// }

// 2. 배열 출력하기 + 입력받기 
int main(){
    int arr[10] = {1,2, 3, 4, 5, 6,7,8,9,10};
    int i;
    for (i=0; i<10; i++){
        printf("배열의 %d 번째 원소: %d \n", i+1, arr[i]);

    }

    for (i=0; i<5; i++)
    {
        printf("%d 번째 학생 성적은? ", i+1);
        scanf("%d", &arr[i]); //scanf &(변수명)
    }
    int ave=0;
    for (i=0; i<5; i++)
    {
        ave = ave + arr[i];
    }
    printf("총점은 %d", ave/5);
    return 0;

}