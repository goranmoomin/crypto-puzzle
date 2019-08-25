#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[160], s2[160];
    scanf("%s %s", s1, s2);

    for(int i = 0; i < 160; i++) {
        if(s1[i] == s2[i]) {
            printf("0");
        } else {
            printf("1");
        }
    }

    return 0;
}
