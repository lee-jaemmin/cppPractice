#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist (1, 100);
    int answer = dist(gen);
    int num;

    bool is_correct = false;
    while(!is_correct) {
        try 
        {
            std::cout << "Insert Number: ";
            std::cin >> num;
            
            if (num < 0 || num > 100) {
                throw num;
            }
            
            if (answer > num) {
                std::cout << "Too small" << std::endl;
            }
            else if (answer < num) {
                std::cout << "Too big" << std::endl;
            }
            else {
                std::cout << "Correct!!" << std::endl;
                is_correct = true;
            }
        
        }
        catch(const std::exception& e) 
        {
            std::cout << "Make a Number in a range 1~100" << std::endl;
            std::cerr << e.what() << std::endl;
        }
    }

    return 0;
}