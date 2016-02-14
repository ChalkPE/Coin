/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-13
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str; cin >> str;
    reverse(str.begin(), str.end());
    cout << str << ' ' << str.size();
    return 0;
}