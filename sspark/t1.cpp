/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-25
 */

#include <stdio.h>
#define f(x, y) printf("%6s: %zu byte%c\n", y, sizeof(x), sizeof(x) > 1 ? 's' : ' ');

int main(){
    f(int,    "int");
    f(short,  "short");
    f(long,   "long");
    f(char,   "char");
    f(float,  "float");
    f(double, "double");
    return 0;
}

//END OF FILE