#include <iostream>
#include <cassert>

void divide(int a, int b)
{
    assert(b != NULL);
    std::cout << "A: " << a << std::endl;
    std::cout << "B " << b << std::endl;
}


int main()
{
    divide(10, 2);
    divide(5, 0);

    return 0;
}