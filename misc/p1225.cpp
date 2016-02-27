/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-28
 */

#include <iostream>
using namespace std;

int main(){
    string a, b; size_t n; cin >> a >> b >> n;
    cout << a << b << endl << a.substr(0, n) << b.substr(n, b.length() - n);
    return 0;
}