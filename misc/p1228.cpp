/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-28
 */

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
    int a; double b; string c, result; cin >> a >> b >> c;
    stringstream stream; stream << a << fixed << setprecision(3) << b << c;
    result = stream.str(); size_t middle = result.size() / 2 + result.size() % 2;
    result.insert(middle, "\n"); cout << result;

    return 0;
}