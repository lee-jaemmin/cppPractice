#include <iostream>

using namespace std;

class character
{
public:
    character() : hp(100), power(100) {}; // 초기화 리스트.

protected:
    int hp;
    int power;
};

class player : public character // 단일 상속
{
public:
    player() {}; // 중괄호 없으면 외부에서 생성자를 '정의' 해야함. 내부에서 '정의' 하기 위해서는 중괄호 필요.
};




class monster
{
public:
    monster() {};
    void under_attack(int damage) {}; // 내부에서 '정의'하려면 중괄호 필요.
    void attack(player target_player) {};
    virtual void special_attack(player target_player); // 가상 함수 선언. (+ 외부 '정의' 필요)
};

void monster::special_attack(player target_player) //  외부에서 '정의'하기
{
    cout << "기본 공격 데미지 -10hp" << endl;
}

// 기본 몬스터 클래스 상속

class monster_a : public monster, character // 다중 상속
{
    // 생성자 없으면 부모 클래스 생성자 호출(이것마저 없으면 오류)
public:
    virtual void special_attack(player target_player) override; // 가상 함수 오버라이드 선언.
};

void monster_a::special_attack(player target_player)
{ // 가상 함수 오버라이딩
    cout << "인텡글 공격~~ -15hp" << endl;
};

class monster_b : public monster, character
{
public:
    monster_b() {}; // 생성자 직접 정의.
    
    virtual void special_attack(player target_player) override // 가상 함수 오버라이드 선언 + 오버라이딩.
    {
        cout <<  "가상 공격 데미지 -0hp" << endl;
    }
};

class monster_c : public monster, character
{
public:
    virtual void special_attack(player target_player) override 
    {
        cout << "강력 뇌전 공격!! 데미지 -100hp" << endl;
    }
};



int main()
{
    player player_1;
    monster_a forest_monster;

    monster &mon = forest_monster; // 
    monster_a &mon_a = forest_monster;

    cout << endl
         <<  "부모 클래스 레퍼런스로 공격" << endl;
    mon.special_attack(player_1); // &mon은 부모 클래스를 참조 하였으나, 결과는 자식 클래스(monster_a)의 인텡글 공격이 출력
    // --> 애초에 이게 맞는 이유는 forest_monster은 자식 클래스인 monster_a의 인스턴스니까.   virtual 함수의 기능. 가장 마지막에 오버라이딩된 함수 호출.

    cout << endl
         <<  "자식 클래스 레퍼런스로 공격" << endl;
    mon_a.special_attack(player_1);

    cout << endl << "네임스페이스(부모클래스접근 의도) 공격" << endl;
    mon_a.monster::special_attack(player_1);

    return 0;
}