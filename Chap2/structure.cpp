#include <iostream>
using namespace std;

struct Person
    {
        std::string name;
        int age;
        float height;
        float weight;
    
    };

void check_age(Person *pt, int length)
{
    for(int i = 0; i < length; i++) {
        if(pt[i].age >= 25) {
            cout << "name : " << pt[i].name << endl;
            cout << "age : " << pt[i].age << endl;
            cout << "weight : " << pt[i].weight << endl;
            cout << "height : " << pt[i].height << endl;
        }
    }
}


int main() {}
/*
{
    Person adult[3] = {
        {"Brian", 24, 180, 70},
        {"Jessica", 22, 165, 55},
        {"Hommes", 30, 170, 90}
    };

    check_age(adult, 3);

}
    */
