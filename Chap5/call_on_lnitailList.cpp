#include <iostream>
using namespace std;

class character {
    public:
        character() {
            cout << "character 클래스 생성자" << endl;
        };
};

class monster {
    public:
        monster() {
            cout << "monster 클래스 생성자" << endl;
        }
};

class monster_a : public monster, character {
    public:
        monster_a() : monster_a(10, 10) { // 초기화 리스트로 다른 생성자 호출.
            cout << "monster_a 클래스 생성자" << endl;
        }
        
        monster_a(int x, int y) : location {x, y} { // location[2] = {x, y}; 와 같은 문법. "리스트 초기화"
            cout << "monster_a 클래스 생성자(매개변수 추가)" << endl;
        }

        void show_location() {
            cout << "위치(" << location[0] << " ,  " << location[1] << ")" << endl;
        }

    private:
        int location[2];
};

int main()
{
    monster_a forest_monster;
    forest_monster.show_location();

    return 0;
}