#include <iostream>

void addOne(const int& y) 
{
    y = y + 1;
/*
/home/hmson/c_cpp_review/cpp_practice/call_by_reference_const.cpp: In function ‘void addOne(const int&)’:
/home/hmson/c_cpp_review/cpp_practice/call_by_reference_const.cpp:5:7: error: assignment of read-only reference ‘y’
*/
} 

int main()
{
    int x = 5;
    std::cout << "x = " << x << '\n';
    addOne(x);
    std::cout << "x = " << x << '\n';
    return 0;
}
