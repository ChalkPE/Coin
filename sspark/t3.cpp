/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-04-01
 */

#include <iostream>
using namespace std;

int main(){
    cout << "이름을 입력하세요:";
    string name; cin >> name;

    cout << "나이를 입력하세요:";
    int age; cin >> age;

    cout << "부서코드를 입력하세요:";
    char code; cin >> code;

    cout << "보안키를 입력하세요:";
    double key; cin >> key;

    cout << "******************************" << endl;
    cout << "이름 : " << name << endl;
    cout << "나이 : " << age << endl;
    cout << "부서코드 : " << code << endl;
    cout << "보안키 : " << key << endl;
    cout << "******************************" << endl;

    return 0;
}

//END OF FILE