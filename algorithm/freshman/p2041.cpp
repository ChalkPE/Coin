/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-13
 */

#include <iostream>

int main(){
    int n; std::cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++) std::cout << (j * n + i) << ' ';
        std::cout << std::endl;
    }
    return 0;
}