// 1부터 10까지 합
#include <iostream>

int main()
{
    int i, sum = 0;
    for ( i = 1; i <= 10; i++){
        sum += i;
    }
    std::cout << "합은 : " << sum << std::endl;
    
    int  user_input = 0;
    std::cout << "입력 : ";
    std::cin >> user_input;
    std::cout << "확인: " << user_input <<std::endl;
    return 0;
}