#include <iostream>
#include <string>

using namespace std;


int main()
/*
{
    int *ptr_int_value = new int;

    *ptr_int_value = 100;
    cout << *ptr_int_value << endl;

    delete ptr_int_value;

    return 0;

}

{
    int *ptr_int_ary = new int [5];

    for (int i = 0; i < 5; i++)
    {
        ptr_int_ary[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << ptr_int_ary[i] << endl; // == *(ptr int ary + i)
    }


    delete ptr_int_ary;
}
*/

{
    int customer = 0;

    cout << "坷疵 规巩 颊丛 : ";
    cin >> customer;

    string *bread = new string[customer];

    for (int i = 0; i < customer; i++)
    {
        bread[i] = "户" + to_string(i);
    }

    cout << endl << "积魂等 户" << endl;

    for (int i = 0; i < customer; i++)
    {
        cout << bread[i] << endl;
    }
    
    delete[] bread;

    return 0;
}