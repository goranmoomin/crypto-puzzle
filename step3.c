#include <stdio.h>
#include <string.h>

int main(void) {
    char s[160];
    scanf("%s", s);

    for(int i = 0; i < 40; i++) {
        if(i % 4 == 0) { printf("\\u"); }
        int a = s[4 * i] - 48;
        int b = s[4 * i + 1] - 48;
        int c = s[4 * i + 2] - 48;
        int d = s[4 * i + 3] - 48;
        int e = 8 * a + 4 * b + 2 * c + d;

        switch(e) {
        case 10: printf("A"); break;
        case 11: printf("B"); break;
        case 12: printf("C"); break;
        case 13: printf("D"); break;
        case 14: printf("E"); break;
        case 15: printf("F"); break;
        default: printf("%d", e); break;
        }
        if(i % 4 == 3) { printf("\n"); }
    }
}
