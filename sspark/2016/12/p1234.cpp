/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-26
 */

#include <string>
#include <iomanip>
#include <iostream>

using namespace std;
class Point { public: int x, y; void scan(){ cin >> x >> y; } };

int main(){
    cout << "세 꼭지점의 좌표를 입력하세요. "; Point a, b, c; a.scan(), b.scan(), c.scan();
    cout << "무게중심의 좌표 = (" << fixed << setprecision(1) << (a.x + b.x + c.x) / 3.0 << ", " << (a.y + b.y + c.y) / 3.0 << ")" << endl;
}