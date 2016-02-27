/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-28
 */

#include <iostream>
#include <vector>

using namespace std;

bool test(){
    size_t n; cin >> n; vector<string> vec(n);
    for(size_t i = 0; i < n; i++){
        string read; cin >> read; vec[i] = read;
    }

    for(size_t i = 0; i < n; i++) for(size_t j = 0; j < n; j++) if(i != j){
        string needle   = (vec[i].length() > vec[j].length()) ? vec[j] : vec[i];
        string haystack = (vec[i].length() > vec[j].length()) ? vec[i] : vec[j];
        if(haystack.find(needle) == 0) return false;
    }
    return true;
}

int main(){
    int t; cin >> t; for(int tt = 0; tt < t; tt++) cout << (test() ? "YES" : "NO") << endl;
    return 0;
}
