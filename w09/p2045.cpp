/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-21
 */

#include <iostream>
using namespace std;

int main(){
    string str; cin >> str;
    for(char c: str){
        if(isupper(c)) cout << (char) tolower(c);
        else if(islower(c)) cout << (char) toupper(c);
        else cout << c;
    }
    return 0;
}
