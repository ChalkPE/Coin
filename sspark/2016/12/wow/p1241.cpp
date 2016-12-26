/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-22
 */

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    int a, b, c, sum;
};

int main(){
    size_t n; cin >> n;
    vector<Person> a(n);

    for(size_t i = 0; i < n; i++) cin >> a[i].name >> a[i].a >> a[i].b >> a[i].c, a[i].sum = a[i].a + a[i].b + a[i].c;
    sort(a.begin(), a.end(), [](Person x, Person y){ return x.sum > y.sum; });
    for(size_t i = 0; i < n; i++) cout << a[i].name << " " << a[i].a << " " << a[i].b << " " << a[i].c << " " << a[i].sum << endl;
}