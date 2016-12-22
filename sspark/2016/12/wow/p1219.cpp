/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-22
 */

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector<string> vec(5);
    for(int i = 0; i < 5; i++) cin >> vec[i];
    sort(vec.begin(), vec.end(), [](string a, string b) { return a.compare(b) > 0; });

    for(int i = 0; i < 5; i++) cout << vec[i] << endl;
}