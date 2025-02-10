#include <iostream>

int main()
{
    int *ptr_ary = new int[5];
    
    for (int i = 0; i < 5; i++) {
        ptr_ary[i] = (i+1);
    }

    for (int i = 0; i < 5; i++) {
        std::cout << ptr_ary[i];
    }

    delete ptr_ary;
}