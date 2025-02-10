#include <iostream>

struct Monster {
    int level;
    int hp;
    int age;
    std::string skill;
    std::string name;
};


int main()
{
    Monster monster = {5, 100, 25, "Thunder", "Jaemin"};

    std::cout << monster.level << std::endl 
    << monster.hp << std::endl 
    << monster.age << std::endl
    << monster.skill << std::endl
    << monster.name << std::endl;
}