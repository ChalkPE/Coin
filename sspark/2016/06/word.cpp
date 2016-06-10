#include <stdio.h>

int main(){
    char x, o; int l, n, m;
    char c00 = 'X', c01 = 'X', c02 = 'X', c03 = 'X', c04 = 'X';
    char c05 = 'X', c06 = 'X', c07 = 'X', c08 = 'X', c09 = 'X';

    do {
        printf("길이: ");
        scanf("%d", &l);
    }
    while (l <= 0 || l > 10);

    printf("내용: ");
    for(n = 0; n < l; n++){
        scanf(n == 0 ? " %c" : "%c", &x);
        switch(n){
            default: return 1;
            case 0: c00 = x; break;
            case 1: c01 = x; break;
            case 2: c02 = x; break;
            case 3: c03 = x; break;
            case 4: c04 = x; break;
            case 5: c05 = x; break;
            case 6: c06 = x; break;
            case 7: c07 = x; break;
            case 8: c08 = x; break;
            case 9: c09 = x; break;
        }
    }

    printf("\n");
    for(m = 0; m < 5; m++){
        for(n = 0; n < l; n++){
            switch(n){
                default: return 1;
                case 0: o = c00; break;
                case 1: o = c01; break;
                case 2: o = c02; break;
                case 3: o = c03; break;
                case 4: o = c04; break;
                case 5: o = c05; break;
                case 6: o = c06; break;
                case 7: o = c07; break;
                case 8: o = c08; break;
                case 9: o = c09; break;
            }

            switch(o){
                default: break;

                case ' ': printf("     "); break;

                case 'a': case 'A': switch(m){
                    default: return 1;
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ###### "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 'b': case 'B': switch(m){
                    default: return 1;
                    case 0: printf(" #####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" #####  "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" #####  "); break;
                } break;

                case 'c': case 'C': switch(m){
                    default: return 1;
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ##     "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 'd': case 'D': switch(m){
                    default: return 1;
                    case 0: printf(" #####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ##  ## "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" #####  "); break;
                } break;

                case 'e': case 'E': switch(m){
                    default: return 1;
                    case 0: printf(" ###### "); break;
                    case 1: printf(" ##     "); break;
                    case 2: printf(" ####   "); break;
                    case 3: printf(" ##     "); break;
                    case 4: printf(" ###### "); break;
                } break;

                case 'f': case 'F': switch(m){
                    default: return 1;
                    case 0: printf(" ###### "); break;
                    case 1: printf(" ##     "); break;
                    case 2: printf(" ####   "); break;
                    case 3: printf(" ##     "); break;
                    case 4: printf(" ##     "); break;
                } break;

                case 'g': case 'G': switch(m){
                    default: return 1;
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##     "); break;
                    case 2: printf(" ## ### "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 'h': case 'H': switch(m){
                    default: return 1;
                    case 0: printf(" ##  ## "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ###### "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 'i': case 'I': switch(m){
                    default: return 1;
                    case 0: printf(" ###### "); break;
                    case 1: printf("   ##   "); break;
                    case 2: printf("   ##   "); break;
                    case 3: printf("   ##   "); break;
                    case 4: printf(" ###### "); break;
                } break;

                case 'j': case 'J': switch(m){
                    default: return 1;
                    case 0: printf(" ###### "); break;
                    case 1: printf("     ## "); break;
                    case 2: printf("     ## "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 'k': case 'K': switch(m){
                    default: return 1;
                    case 0: printf(" ##  ## "); break;
                    case 1: printf(" ## ##  "); break;
                    case 2: printf(" ####   "); break;
                    case 3: printf(" ## ##  "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 'l': case 'L': switch(m){
                    default: return 1;
                    case 0: printf(" ##     "); break;
                    case 1: printf(" ##     "); break;
                    case 2: printf(" ##     "); break;
                    case 3: printf(" ##     "); break;
                    case 4: printf(" ###### "); break;
                } break;

                case 'm': case 'M': switch(m){
                    default: return 1;
                    case 0: printf(" ##   ## "); break;
                    case 1: printf(" ### ### "); break;
                    case 2: printf(" ## # ## "); break;
                    case 3: printf(" ##   ## "); break;
                    case 4: printf(" ##   ## "); break;
                } break;

                case 'n': case 'N': switch(m){
                    default: return 1;
                    case 0: printf(" ##  ## "); break;
                    case 1: printf(" ### ## "); break;
                    case 2: printf(" ## ### "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 'o': case 'O': switch(m){
                    default: return 1;
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ##  ## "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 'p': case 'P': switch(m){
                    default: return 1;
                    case 0: printf(" #####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" #####  "); break;
                    case 3: printf(" ##     "); break;
                    case 4: printf(" ##     "); break;
                } break;

                case 'q': case 'Q': switch(m){
                    default: return 1;
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ## ### "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ##### "); break;
                } break;

                case 'r': case 'R': switch(m){
                    default: return 1;
                    case 0: printf(" #####  "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" #####  "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 's': case 'S': switch(m){
                    default: return 1;
                    case 0: printf("  ####  "); break;
                    case 1: printf(" ##     "); break;
                    case 2: printf("  ####  "); break;
                    case 3: printf("     ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 't': case 'T': switch(m){
                    default: return 1;
                    case 0: printf(" ###### "); break;
                    case 1: printf("   ##   "); break;
                    case 2: printf("   ##   "); break;
                    case 3: printf("   ##   "); break;
                    case 4: printf("   ##   "); break;
                } break;

                case 'u': case 'U': switch(m){
                    default: return 1;
                    case 0: printf(" ##  ## "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ##  ## "); break;
                    case 3: printf(" ##  ## "); break;
                    case 4: printf("  ####  "); break;
                } break;

                case 'v': case 'V': switch(m){
                    default: return 1;
                    case 0: printf(" ##  ## "); break;
                    case 1: printf(" ##  ## "); break;
                    case 2: printf(" ##  ## "); break;
                    case 3: printf("  ####  "); break;
                    case 4: printf("   ##   "); break;
                } break;

                case 'w': case 'W': switch(m){
                    default: return 1;
                    case 0: printf(" ##   ## "); break;
                    case 1: printf(" ##   ## "); break;
                    case 2: printf(" ## # ## "); break;
                    case 3: printf(" ####### "); break;
                    case 4: printf("  ## ##  "); break;
                } break;

                case 'x': case 'X': switch(m){
                    default: return 1;
                    case 0: printf(" ##  ## "); break;
                    case 1: printf("  ####  "); break;
                    case 2: printf("   ##   "); break;
                    case 3: printf("  ####  "); break;
                    case 4: printf(" ##  ## "); break;
                } break;

                case 'y': case 'Y': switch(m){
                    default: return 1;
                    case 0: printf(" ##  ## "); break;
                    case 1: printf("  ####  "); break;
                    case 2: printf("   ##   "); break;
                    case 3: printf("   ##   "); break;
                    case 4: printf("   ##   "); break;
                } break;

                case 'z': case 'Z': switch(m){
                    default: return 1;
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
    return 0;
}