#include <iostream>

using namespace std;

class character
{
public:
    character() : hp(100), power(100) {}; // 초기화 리스트트.

protected:
    int hp;
    int power;
};

class player : public character // 단일, public 상속 --> hp, power를 player 외부에서 사용이 가능한거지.
{
public:
    player() {}; // 중괄호로써써 내부에서 생성자 '정의'까지 마치는 방식.
};

class monster
{
public:
    monster() {};
    void under_attack(int damage) {}; // 중괄호로써써 내부에서 메소드(멤버 함수) '정의'까지 마치는 방식.
    void attack(player target_player) {};
    void special_attack(player target_player); // 중괄호가 없으므로 외부에서 '정의' 필요. 현재는 '선언'만 한 상태.
};

void monster::special_attack(player target_player) // 외부에서 '정의' 중중
{
    cout << "기본 공격 -10hp" << endl;
}

// monster 클래스를 상속하여 monster_a,b,c를 만듦.

class monster_a : public monster, character // monster:public, character:private으로 다중 상속.
{
    // 생성자 없을 시 부모클래스(여기선 monster) 생성자 호출. 
public:
    void special_attack(player target_player)
    {
        cout << "인텡글 공격~~ 데미지 -15hp" << endl;
    }
};

class monster_b : public monster, character
{
public:
    monster_b() {}; // 생성자 직접 정의.
    void special_attack(player target_player)
    {
        cout << "가상 공격 데미지 -0hp" << endl;
    } // 메소드를 클래스 내부에 정의하는 방식
};

class monster_c : public monster, character
{
public:
    void special_attack(player target_player);
};

void monster_c::special_attack(player target_player)
{
    cout << "강력 뇌전 공격!! 데미지 -100hp" << endl;
}; // 메소드를 클래스 외부에 정의하는 방식

int main()
{

    player player_1;

    monster_a forest_monster;
    monster_b tutorial_monster;
    monster_c boss_monster;

    cout << "오버라이딩 공격" << endl;
    forest_monster.special_attack(player_1);
    tutorial_monster.special_attack(player_1);
    boss_monster.special_attack(player_1);

    cout << endl
         << "기본 공격격" << endl;
    forest_monster.monster::special_attack(player_1);
    tutorial_monster.monster::special_attack(player_1);
    boss_monster.monster::special_attack(player_1);

    return 0;
}