/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-21
 */

#include <iostream>
using namespace std;

int main(){
    string a, b; size_t n; cin >> a >> b >> n;
    cout << a.substr(a.size() - n, n) << b.substr(0, n);
}