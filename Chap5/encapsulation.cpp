#include <iostream>

using namespace std;

class bank
{
public:
    bank();
    void use_counter(int in, int out);

private:
    int safe; // 창구(use_counter)와 금고(safe)를 묶어서 캡슐화.
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

    my_bank.use_counter(0, 20); // 입, 출금할 때 public인 창구를 통해서 하면 됨.  private인 금고에는 접근할 일이 없다.
    my_bank.use_counter(50, 0);
    my_bank.use_counter(100, 50);

    return 0;
}