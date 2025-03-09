#include <iostream>
using namespace std;

class character {
    public:
        character() {
            cout << "charater 클래스 생성자" << endl;
        }
};



int main()
{
    character player; // 객체 생성과 함께 생성자가 호출됨. (문자열 출력으로 표현.)
    return 0;
}