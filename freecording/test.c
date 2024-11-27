#include <stdio.h>

int main(void) {
    char *str = "aaaa";
    char *str2 = "bbbb";
    int a = 10;
    printf("%&d\n", &a);
    printf("%s\n", str);
    printf("%s\n", str2);
    *str = *str2;
    printf("%s\n", str);
    char *empty = str;
    str = str2;
    str2 = empty;
    printf("%s\n", str2);
}