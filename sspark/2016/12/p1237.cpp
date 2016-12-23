/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-23
 */

#include <string>
#include <iostream>

using namespace std;
struct { string name, phone, address; } your;

int main(){
    cin >> your.name >> your.phone >> your.address;
    cout << "이름 : " << your.name << endl << "전화번호 : " << your.phone << endl << "주소 : " << your.address << endl;
}