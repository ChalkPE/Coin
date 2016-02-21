/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-21
 */

#include <iostream>
using namespace std;

int main(){
    string str; cin >> str;
    bool alpha = false, digit = false;

    for(char c: str){
        bool a = isalpha(c), d = isdigit(c);
        if(d && alpha) cout << ' ';
        if(a && digit) cout << ' ';
        cout << c; alpha = a; digit = d;
    }
    return 0;
}