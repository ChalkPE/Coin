/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-13
 */

#include <iostream>

int f(int n){
    if(n == 1) return 1;
    return n * f(n - 1);
}

int main(){
    int n; std::cin >> n; std::cout << f(n);
    return 0;
}