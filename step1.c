#include <stdio.h>
#include <string.h>

int main(void) {
    char *str;
    for(int i = 0; i < 2; i++) {
        scanf("%[^\n]%*c", str);

        for(unsigned long i = 0; i < strlen(str); i++) {
            if(str[i] >= 65 && str[i] <= 90) {
                printf("0");
            } else if(str[i] >= 97 && str[i] <= 122) {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}
