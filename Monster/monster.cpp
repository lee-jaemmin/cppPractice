#include <iostream>

using namespace std;

class character
{
public:
    character() : hp(100), power(100) {}; // 초기화 리스트

protected:
    int hp;
    int power;
};

class player : public character // 단일 상속속
{
public:
    player() {}; // 중괄호가 없으면 외부에서 생성자를 '정의'해야함. 내부에서 '정의'하기 위해선 중괄호 필요.
};

class monster
{
public:
    monster() {};
    void under_attack(int damage) {}; // 마찬가지로 내부에서 '정의'하려면 중괄호 필요요.
    void attack(player target_player) {};
    void special_attack(player target_player); // 중괄호 없이 '선언'만 하였다면 반드시 클래스 외부에서 '정의' 작업 필요
};

void monster::special_attack(player target_player) // 외부에서 '정의'하는 작업
{
    cout << "기본본 공격~  데미지 -10hp" << endl;
}

// 기본 몬스터 클래스 상속속

class monster_a : public monster, character // 다중 상속 monster는 public으로 상속, character는 private 상속(default)
{
    // 생성자가 없으면 부모 클래스 생성자를 호출(이것마저 없을 시 오류 발생)
public:
    void special_attack(player target_player)
    {
        cout << "인텡글 공격!! 데미지 -15hp" << endl;
    }
};

class monster_b : public monster, character
{
public:
    monster_b() {}; // 생성자 직접 정의
    void special_attack(player target_player)
    {
        cout << "가상 공격 데미지 -0hp" << endl;
    } // 메소드를 클래스 내부에 정의하는 방식식
};

class monster_c : public monster, character
{
public:
    void special_attack(player target_player);
};

void monster_c::special_attack(player target_player)
{
    cout << "강력 뇌전 공격!! 데미지 -100hp" << endl;
}; //  메소드를 클래스 내부에 선언만 해놓고 외부에 정의하는 방식

int main()
{

    player player_1;

    monster_a forest_monster;
    monster_b tutorial_monster;
    monster_c boss_monster;

    cout << "몬스터 총 공격" << endl;

    forest_monster.special_attack(player_1);
    tutorial_monster.special_attack(player_1);
    boss_monster.special_attack(player_1);

    return 0;
}
