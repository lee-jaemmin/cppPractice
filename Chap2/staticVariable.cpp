#include <iostream>
using namespace std;

int getNewId()
{
    static int ID = 0;
    return ++ID;
}


int main()
{
    cout << "ID : " << getNewId() << endl;
    cout << "ID : " << getNewId() << endl;
    cout << "ID : " << getNewId() << endl;
    cout << "ID : " << getNewId() << endl;
    cout << "ID : " << getNewId() << endl;

    return 0; // 1,2,3,4,5
}