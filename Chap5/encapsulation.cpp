#include <iostream>

using namespace std;

class bank
{
public:
    bank();
    void use_counter(int in, int out);

private:
    int safe; // â��(use_counter)�� �ݰ�(safe)�� ��� ĸ��ȭ.
};

bank::bank()
{
    safe = 1000;
    cout << "???? ??? : " << safe << endl;
    cout << endl;
}

void bank::use_counter(int in, int out)
{
    safe += in;
    safe -= out;

    cout << "??? : " << in << endl;
    cout << "??? : " << out << endl;
    cout << "??? : " << safe << endl;
    cout << endl;
}

int main()
{
    bank my_bank;

    my_bank.use_counter(0, 20); // ��, ����� �� public�� â���� ���ؼ� �ϸ� ��.  private�� �ݰ��� ������ ���� ����.
    my_bank.use_counter(50, 0);
    my_bank.use_counter(100, 50);

    return 0;
}