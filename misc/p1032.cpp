/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-28
 */

#include <iostream>
using namespace std;

int main(){
    int y; cin >> y;
    cout << ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? "윤년" : "평년");
    return 0;
}