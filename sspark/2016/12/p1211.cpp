/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-26
 */

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(int i){
    vector<string> v(5);
    for(i = 0; i <= 4; i++) cin >> v[i];
    for(i = 4; i >= 0; i--) cout << v[i] << endl;
}