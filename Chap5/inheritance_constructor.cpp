#include <iostream>
using namespace std;

class character {
    public:
        character() {
            cout << "character Ŭ���� ������" << endl;
        };
};

class monster {
    public:
        monster() {
            cout << "monster Ŭ���� ������" << endl;
        }
};

class monster_a : public monster, character {
    public:
        monster_a() {
            cout << "monster_a Ŭ���� ������" << endl;
        }
};

int main()
{
    monster_a forest_monster; // �翬�ϰԵ� �θ��� ������ ���� ȣ��. monster - character - monster_a ����.
    return 0;
}