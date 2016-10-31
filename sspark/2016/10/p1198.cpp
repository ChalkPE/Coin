/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-31
 */

#include <string>
#include <iostream>
#include <algorithm>

int main(){
    size_t n; std::string s; std::cin >> s >> n;
    std::reverse(s.begin(), s.end()); std::cout << s.substr(0, n);
}