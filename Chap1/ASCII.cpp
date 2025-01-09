#include <iostream>

int main()
{
    std::cout << "printing ASCII CODE\n";

    for (char i = 32; i <= 126; i++) {
        std::cout << i << ((i % 16 == 15) ? '\n' : ' ');
    }

    return 0;
}