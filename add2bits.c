#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int makeinteger(char *str) {
    int res = 0;
    while (*str) {
        res = res * 2 + (*str - '0');
        str++;
    }
    return res;
}

char* makebinary(int sum) {
    char *str = (char*)malloc(33); 
    if (!str) return NULL; 
    for (int i = 0; i < 32; i++) {
        if (sum & (1 << (31 - i))) {
            str[i] = '1';
        } else {
            str[i] = '0';
        }
    }
    str[32] = '\0'; 
    return str;
}

int main() {
    char str1[32], str2[32];

    printf("Enter first binary number: ");
    scanf("%s", str1);

    printf("Enter second binary number: ");
    scanf("%s", str2);

    int dec1 = makeinteger(str1);
    int dec2 = makeinteger(str2);
    int sum = dec1 + dec2;

    char *binaryResult = makebinary(sum);
    printf("Sum of %s and %s is %s\n", str1, str2, binaryResult);
    free(binaryResult); 

    return 0;
}
