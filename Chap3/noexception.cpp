#include <iostream>
using namespace std;


void real_noexcept() noexcept // 예외 없음 명시
{
    cout << "no except" << endl;
}

int main()
{
    return 0;
}