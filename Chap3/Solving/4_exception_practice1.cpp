#include <iostream>
#include <cstdlib>
using namespace std;

void month_exception(int month)
{
    try
    {
        if (month < 1 || month > 12) {
            throw month;
        }
    }
    catch(int month)
    {
        cout << "Month out of Range" << endl;
        exit(-1);
    }
    
}

void date_exception(int date)
{
    try
    {
        if (date < 1 || date > 31) {
            throw date;
        }
    }
    catch(int date)
    {
        cout << "Date out of Range" << endl;
        exit(-1);
    }
    
}

int main()
{
    int month, date;

    cout << "Month: ";
    cin >> month;
    month_exception(month);

    cout << endl<< "Date: ";
    cin >> date;
    date_exception(date);
    cout << endl; 

    if (month >= 3 && month <= 5) {
        cout << "It's Spring" << endl;
    }

    return 0;
}