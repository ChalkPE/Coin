/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-22
 */

#include <vector>
#include <iostream>

using namespace std;

int main(){
    size_t n; cin >> n;
    if(n == 1) return cout << '0' << endl, 0;

    vector<int> vec(n);
    for(size_t i = 0; i < n; i++) cin >> vec[i];

    size_t i = 0, count = 1;
    while(true){
        int power = vec[i];
        if(i + power >= n - 1) return cout << count << endl, 0;

        int bestIndex = 1;
        int bestValue = vec[i + 1];

        for(int j = 1; j <= power; j++){
            int val = j + vec[i + j];
            if(val > bestValue) bestIndex = j, bestValue = val;
        }

        count++, i += bestIndex;
    }
}
