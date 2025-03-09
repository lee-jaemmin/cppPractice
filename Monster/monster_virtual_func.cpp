#include <iostream>

using namespace std;

class character
{
public:
    character() : hp(100), power(100) {}; // �ʱ�ȭ ����Ʈ.

protected:
    int hp;
    int power;
};

class player : public character // ���� ���
{
public:
    player() {}; // �߰�ȣ ������ �ܺο��� �����ڸ� '����' �ؾ���. ���ο��� '����' �ϱ� ���ؼ��� �߰�ȣ �ʿ�.
};




class monster
{
public:
    monster() {};
    void under_attack(int damage) {}; // ���ο��� '����'�Ϸ��� �߰�ȣ �ʿ�.
    void attack(player target_player) {};
    virtual void special_attack(player target_player); // ���� �Լ� ����. (+ �ܺ� '����' �ʿ�)
};

void monster::special_attack(player target_player) //  �ܺο��� '����'�ϱ�
{
    cout << "�⺻ ���� ������ -10hp" << endl;
}

// �⺻ ���� Ŭ���� ���

class monster_a : public monster, character // ���� ���
{
    // ������ ������ �θ� Ŭ���� ������ ȣ��(�̰͸��� ������ ����)
public:
    virtual void special_attack(player target_player) override; // ���� �Լ� �������̵� ����.
};

void monster_a::special_attack(player target_player)
{ // ���� �Լ� �������̵�
    cout << "���ޱ� ����~~ -15hp" << endl;
};

class monster_b : public monster, character
{
public:
    monster_b() {}; // ������ ���� ����.
    
    virtual void special_attack(player target_player) override // ���� �Լ� �������̵� ���� + �������̵�.
    {
        cout <<  "���� ���� ������ -0hp" << endl;
    }
};

class monster_c : public monster, character
{
public:
    virtual void special_attack(player target_player) override 
    {
        cout << "���� ���� ����!! ������ -100hp" << endl;
    }
};



int main()
{
    player player_1;
    monster_a forest_monster;

    monster &mon = forest_monster; // 
    monster_a &mon_a = forest_monster;

    cout << endl
         <<  "�θ� Ŭ���� ���۷����� ����" << endl;
    mon.special_attack(player_1); // &mon�� �θ� Ŭ������ ���� �Ͽ�����, ����� �ڽ� Ŭ����(monster_a)�� ���ޱ� ������ ���
    // --> ���ʿ� �̰� �´� ������ forest_monster�� �ڽ� Ŭ������ monster_a�� �ν��Ͻ��ϱ�.   virtual �Լ��� ���. ���� �������� �������̵��� �Լ� ȣ��.

    cout << endl
         <<  "�ڽ� Ŭ���� ���۷����� ����" << endl;
    mon_a.special_attack(player_1);

    cout << endl << "���ӽ����̽�(�θ�Ŭ�������� �ǵ�) ����" << endl;
    mon_a.monster::special_attack(player_1);

    return 0;
}