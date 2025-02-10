#include <iostream>
#include <cassert>

using namespace std;

void print_number(int *pt) 
{
    assert(pt != NULL); // NULL이 아닐 때만 넘어가세요.
    cout << *pt << endl;
}

int main()
{
    int a = 100;
    int *b = NULL;
    int *c = NULL;

    b = &a;
    print_number(b);

    print_number(c);

    return 0;
}