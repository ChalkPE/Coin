/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-21
 */

#include <iostream>
using namespace std;

int main(){
    string haystack, needle; cin >> haystack >> needle; int count = 0;
    for(size_t i = 0; i < haystack.size(); i++) if(haystack.find(needle, i) == i) count++;
    cout << count; return 0;
}