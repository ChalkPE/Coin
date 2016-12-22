/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-22
 */

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a(11);
    for(size_t i = 0; i < 10; i++) cin >> a[i];

    int p; cin >> p; a[10] = p;
    sort(a.begin(), a.end());

    int i = find(a.begin(), a.end(), p) - a.begin();
    cout << (i ==  0 ? p : a[i - 1]) << endl;
    cout << (i == 10 ? p : a[i + 1]) << endl;
}