#include <stdio.h>

int main(){
    int l, n, m; char x = 0, o = 0,
    
    c00 = 0, c01 = 0, c02 = 0, c03 = 0, c04 = 0, c05 = 0, c06 = 0, c07 = 0, c08 = 0, c09 = 0, c10 = 0, c11 = 0, c12 = 0, c13 = 0, c14 = 0, c15 = 0, c16 = 0, c17 = 0, c18 = 0, c19 = 0, c20 = 0, c21 = 0, c22 = 0, c23 = 0, c24 = 0, c25 = 0, c26 = 0, c27 = 0, c28 = 0, c29 = 0, c30 = 0, c31 = 0,
    c32 = 0, c33 = 0, c34 = 0, c35 = 0, c36 = 0, c37 = 0, c38 = 0, c39 = 0, c40 = 0, c41 = 0, c42 = 0, c43 = 0, c44 = 0, c45 = 0, c46 = 0, c47 = 0, c48 = 0, c49 = 0, c50 = 0, c51 = 0, c52 = 0, c53 = 0, c54 = 0, c55 = 0, c56 = 0, c57 = 0, c58 = 0, c59 = 0, c60 = 0, c61 = 0, c62 = 0, c63 = 0;

    printf("Length: ");
    do scanf("%d", &l);
    while (l <= 0 || l > 64);

    printf("String: ");
    for(n = 0; n < l; n++){
        scanf(n == 0 ? " %c" : "%c", &x);
        n ==  0? c00 = x: n ==  1? c01 = x: n ==  2? c02 = x: n ==  3? c03 = x: n ==  4? c04 = x: n ==  5? c05 = x: n ==  6? c06 = x: n ==  7? c07 = x: n ==  8? c08 = x: n ==  9? c09 = x: n == 10? c10 = x: n == 11? c11 = x: n == 12? c12 = x: n == 13? c13 = x: n == 14? c14 = x: n == 15? c15 = x:
        n == 16? c16 = x: n == 17? c17 = x: n == 18? c18 = x: n == 19? c19 = x: n == 20? c20 = x: n == 21? c21 = x: n == 22? c22 = x: n == 23? c23 = x: n == 24? c24 = x: n == 25? c25 = x: n == 26? c26 = x: n == 27? c27 = x: n == 28? c28 = x: n == 29? c29 = x: n == 30? c30 = x: n == 31? c31 = x:
        n == 32? c32 = x: n == 33? c33 = x: n == 34? c34 = x: n == 35? c35 = x: n == 36? c36 = x: n == 37? c37 = x: n == 38? c38 = x: n == 39? c39 = x: n == 40? c40 = x: n == 41? c41 = x: n == 42? c42 = x: n == 43? c43 = x: n == 44? c44 = x: n == 45? c45 = x: n == 46? c46 = x: n == 47? c47 = x:
        n == 48? c48 = x: n == 49? c49 = x: n == 50? c50 = x: n == 51? c51 = x: n == 52? c52 = x: n == 53? c53 = x: n == 54? c54 = x: n == 55? c55 = x: n == 56? c56 = x: n == 57? c57 = x: n == 58? c58 = x: n == 59? c59 = x: n == 60? c60 = x: n == 61? c61 = x: n == 62? c62 = x: n == 63? c63 = x: 0;
    }

    printf("\n");
    for(m = 0; m < 5; m++){
        for(n = 0; n < l; n++){
            n ==  0? o = c00: n ==  1? o = c01: n ==  2? o = c02: n ==  3? o = c03: n ==  4? o = c04: n ==  5? o = c05: n ==  6? o = c06: n ==  7? o = c07: n ==  8? o = c08: n ==  9? o = c09: n == 10? o = c10: n == 11? o = c11: n == 12? o = c12: n == 13? o = c13: n == 14? o = c14: n == 15? o = c15:
            n == 16? o = c16: n == 17? o = c17: n == 18? o = c18: n == 19? o = c19: n == 20? o = c20: n == 21? o = c21: n == 22? o = c22: n == 23? o = c23: n == 24? o = c24: n == 25? o = c25: n == 26? o = c26: n == 27? o = c27: n == 28? o = c28: n == 29? o = c29: n == 30? o = c30: n == 31? o = c31:
            n == 32? o = c32: n == 33? o = c33: n == 34? o = c34: n == 35? o = c35: n == 36? o = c36: n == 37? o = c37: n == 38? o = c38: n == 39? o = c39: n == 40? o = c40: n == 41? o = c41: n == 42? o = c42: n == 43? o = c43: n == 44? o = c44: n == 45? o = c45: n == 46? o = c46: n == 47? o = c47:
            n == 48? o = c48: n == 49? o = c49: n == 50? o = c50: n == 51? o = c51: n == 52? o = c52: n == 53? o = c53: n == 54? o = c54: n == 55? o = c55: n == 56? o = c56: n == 57? o = c57: n == 58? o = c58: n == 59? o = c59: n == 60? o = c60: n == 61? o = c61: n == 62? o = c62: n == 63? o = c63: 0;

            switch(o){
                default: case ' ': printf("     "); break;

                case 'a': case 'A': switch(m){
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ###### "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 'b': case 'B': switch(m){
                    case 0: printf(" #####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" #####  "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" #####  "); break;
                } break;

                case 'c': case 'C': switch(m){
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ##     "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 'd': case 'D': switch(m){
                    case 0: printf(" #####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ##  ## "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" #####  "); break;
                } break;

                case 'e': case 'E': switch(m){
                    case 0: printf(" ###### "); break;
                    case 1: printf(" ##     "); break;
                    case 2: printf(" ####   "); break;
                    case 3: printf(" ##     "); break;
                    case 4: printf(" ###### "); break;
                } break;

                case 'f': case 'F': switch(m){
                    case 0: printf(" ###### "); break;
                    case 1: printf(" ##     "); break;
                    case 2: printf(" ####   "); break;
                    case 3: printf(" ##     "); break;
                    case 4: printf(" ##     "); break;
                } break;

                case 'g': case 'G': switch(m){
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##     "); break;
                    case 2: printf(" ## ### "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 'h': case 'H': switch(m){
                    case 0: printf(" ##  ## "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ###### "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 'i': case 'I': switch(m){
                    case 0: printf(" ###### "); break;
                    case 1: printf("   ##   "); break;
                    case 2: printf("   ##   "); break;
                    case 3: printf("   ##   "); break;
                    case 4: printf(" ###### "); break;
                } break;

                case 'j': case 'J': switch(m){
                    case 0: printf(" ###### "); break;
                    case 1: printf("     ## "); break;
                    case 2: printf("     ## "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 'k': case 'K': switch(m){
                    case 0: printf(" ##  ## "); break;
                    case 1: printf(" ## ##  "); break;
                    case 2: printf(" ####   "); break;
                    case 3: printf(" ## ##  "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 'l': case 'L': switch(m){
                    case 0: printf(" ##     "); break;
                    case 1: printf(" ##     "); break;
                    case 2: printf(" ##     "); break;
                    case 3: printf(" ##     "); break;
                    case 4: printf(" ###### "); break;
                } break;

                case 'm': case 'M': switch(m){
                    case 0: printf(" ##   ## "); break;
                    case 1: printf(" ### ### "); break;
                    case 2: printf(" ## # ## "); break;
                    case 3: printf(" ##   ## "); break;
                    case 4: printf(" ##   ## "); break;
                } break;

                case 'n': case 'N': switch(m){
                    case 0: printf(" ##  ## "); break;
                    case 1: printf(" ### ## "); break;
                    case 2: printf(" ## ### "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 'o': case 'O': switch(m){
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ##  ## "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 'p': case 'P': switch(m){
                    case 0: printf(" #####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" #####  "); break;
                    case 3: printf(" ##     "); break;
                    case 4: printf(" ##     "); break;
                } break;

                case 'q': case 'Q': switch(m){
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ## ### "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ##### "); break;
                } break;

                case 'r': case 'R': switch(m){
                    case 0: printf(" #####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" #####  "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 's': case 'S': switch(m){
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##     "); break;
                    case 2: printf("  ####  "); break;
                    case 3: printf("     ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 't': case 'T': switch(m){
                    case 0: printf(" ###### "); break;
                    case 1: printf("   ##   "); break;
                    case 2: printf("   ##   "); break;
                    case 3: printf("   ##   "); break;
                    case 4: printf("   ##   "); break;
                } break;

                case 'u': case 'U': switch(m){
                    case 0: printf(" ##  ## "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ##  ## "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 'v': case 'V': switch(m){
                    case 0: printf(" ##  ## "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ##  ## "); break;
                    case 3: printf("  ####  "); break;
                    case 4: printf("   ##   "); break;
                } break;

                case 'w': case 'W': switch(m){
                    case 0: printf(" ##   ## "); break;
                    case 1: printf(" ##   ## "); break;
                    case 2: printf(" ## # ## "); break;
                    case 3: printf(" ####### "); break;
                    case 4: printf("  ## ##  "); break;
                } break;

                case 'x': case 'X': switch(m){
                    case 0: printf(" ##  ## "); break;
                    case 1: printf("  ####  "); break;
                    case 2: printf("   ##   "); break;
                    case 3: printf("  ####  "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 'y': case 'Y': switch(m){
                    case 0: printf(" ##  ## "); break;
                    case 1: printf("  ####  "); break;
                    case 2: printf("   ##   "); break;
                    case 3: printf("   ##   "); break;
                    case 4: printf("   ##   "); break;
                } break;

                case 'z': case 'Z': switch(m){
                    case 0: printf(" ###### "); break;
                    case 1: printf("    ##  "); break;
                    case 2: printf("   ##   "); break;
                    case 3: printf("  ##    "); break;
                    case 4: printf(" ###### "); break;
                } break;
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}