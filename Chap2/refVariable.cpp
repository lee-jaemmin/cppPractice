#include <iostream>
using namespace std;

void swap(int &ref_a, int &ref_b)
{
    cout << "[swap func] before swap, ref_a: " << ref_a << "ref_b: " << ref_b << endl;

    int temp = ref_a;
    ref_a = ref_b;
    ref_b = temp;

    cout << "[swap func] before swap, ref_a: " << ref_a << "ref_b: " << ref_b << endl;
}

int main()
{
    int a = 5;
    int b = 10;

    cout << "[main] before swap, a: " << a << "  b: " << b << endl
         << endl;

    swap(a, b);

    cout << "[main] after swap, a: " << a << "  b: " << b << endl
         << endl;

    return 0;
}

/* call by address는 매개변수를 포인터로 설정
Ex) (int *pt_a) 처럼 설정하고 넘겨줄 때 &a식으로 넘기면 됨 */