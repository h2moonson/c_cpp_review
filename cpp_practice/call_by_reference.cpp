#include <iostream>
void addOne(int& y) // y is a reference variable
{
    y = y + 1;
} // y is destroyed here

int main()
{
    int x = 5;
    std::cout << "x = " << x << '\n';
    addOne(x);
    std::cout << "x = " << x << '\n';
    return 0;
}
