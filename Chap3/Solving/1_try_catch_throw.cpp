#include <iostream>

int main()
{   
    int divisor = 0;

    try
    {
        if (divisor == 0) {
            throw 0;
        }

        std::cout << "Division Completed" << std::endl;
    }
    catch(int divisor)
    {
        std::cout << "Divisor is " << divisor << ". " << "can't execute division";
    }
    
    

    return 0;
}