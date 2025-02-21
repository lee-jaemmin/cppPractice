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

class player : public character // ���� ��Ӽ�
{
public:
    player() {}; // �߰�ȣ ������ �ܺο��� �����ڸ� '����' �ؾ���. ���ο��� '����' �ϱ� ���ؼ��� �߰�ȣ �ʿ�.
};

class monster
{
public:
    monster() {};
    void under_attack(int damage) {}; // �������� ���ο��� '����'�Ϸ��� �߰�ȣ �ʿ�.
    void attack(player target_player) {};
    void special_attack(player target_player); // �߰�ȣ ���� "����"�� �Ͽ��ٸ� �ݵ�� Ŭ���� �ܺο��� '����'�� �ʿ�
};

void monster::special_attack(player target_player) // �ܺο��� '����'�ϱ��
{
    cout << "�⺻ ���� ������ -10hp" << endl;
}

// �⺻ ���� Ŭ���� ���

class monster_a : public monster, character // ���� ��Ӽ�
{
    // ������ ������ �θ� Ŭ���� ������ ȣ��(�̰͸��� ������ ����)
public:
    void special_attack(player target_player)
    {
        cout << "���ޱ� ����~~ ������ -15hp" << endl;
    }
};

class monster_b : public monster, character
{
public:
    monster_b() {}; // ������ ���� ����.
    void special_attack(player target_player)
    {
        cout << "���� ���� ������ -0hp" << endl;
    } // �޼ҵ带 Ŭ���� ���ο� �����ϴ� ���
};

class monster_c : public monster, character
{
public:
    void special_attack(player target_player);
};

void monster_c::special_attack(player target_player)
{
    cout << "���� ���� ����!! ������ -100hp" << endl;
}; // �޼ҵ带 Ŭ���� ���ο� ���� �س��� �ܺο� �����ϴ� ���

int main()
{

    player player_1;

    monster_a forest_monster;
    monster_b tutorial_monster;
    monster_c boss_monster;

    cout << "�������̵� ����" << endl;
    forest_monster.special_attack(player_1);
    tutorial_monster.special_attack(player_1);
    boss_monster.special_attack(player_1);

    cout << endl
         << "�⺻ ����" << endl;
    forest_monster.monster::special_attack(player_1);
    tutorial_monster.monster::special_attack(player_1);
    boss_monster.monster::special_attack(player_1);

    return 0;
}