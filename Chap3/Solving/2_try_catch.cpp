#include <iostream>
#include <cstdlib>

void process(int value)
{
    try
    {
        if (value < 0) {
            throw value;
        }

        std::cout << "Value: " << value << std::endl;
    }
    catch(int value)
    {
        std::cout << "Exception occured!" << std::endl;
    }
    
}


int main()
{
    process(10);
    process(-5);
    return 0;
}