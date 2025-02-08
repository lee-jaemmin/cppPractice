#include <iostream>

int main()
{
    char char_value = 'A';
    int int_value = 123;
    double double_value = 123.456;

    char *char_pointer_value = &char_value;

    std::cout << "char value : " << char_value << std::endl;
    std::cout << "&char value : " << &char_value << std::endl;
    std::cout << "char pointer value : " << *char_pointer_value << std::endl;

}
