#include <iostream>
int main()
{
    std::cout << "hi" << " how to conncect"<< std::endl
    << "my name is "
    << "Psi" << std::endl;
    return 0;
}


/*
std::cout << 출력할 것 << 출력할 것  << ... <<  출력할 것;
std::cout << std::endl; */

// Q. 이름 없는 이름 공간? 해당 파일 안에서만 접근 가능 (마치 static 키워드)