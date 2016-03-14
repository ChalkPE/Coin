/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-21
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    vector<string> words(3);
    for(size_t i = 0; i < words.size(); i++) cin >> words[i];

    sort(words.begin(), words.end());
    for(size_t i = 0; i < words.size(); i++) cout << words[i] << ' ';

    return 0;
}