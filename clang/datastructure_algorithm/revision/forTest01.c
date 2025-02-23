#include <stdio.h>
#include <string.h>

typedef struct {
    int x, y;
} some_t;

int f (char *a, char *b) {
    if (*a == '\0' || *b == '\0') {
        return 0;
    } else if (*a == *b) {
        return f(a + 1, b + 1) + 1;
    } else {
        return f(a + 1, b + 1);
    }
}

some_t g(some_t p, some_t *q) {
    p.x = p.x + p.y;
    q->x = q->x + q->y;
    return p;
}

int main() {
    char s[100];
    some_t a, b, c;
    int ret;
    
    strcpy(s, "abcdef");
    strcpy(s + 2, "12");
    printf("%s\n", s);

    strcpy(s, "abcdef");
    strcpy(s + 2, "12");
    printf("%s\n", s);

    strcpy(s, "abcdefgh");
    s[5] = '\0';
    *(s + 3) = 'X';
    printf("%s\n", s);

    ret = f("notameryouichirou", "nakamurateigo");
    printf("%d\n", ret);

    a.x = 5;
    a.y = 3;
    b.x = 20;
    b.y = 10;

    c = g(b, &a);
    printf("%d %d %d\n", a.x, b.x, c.x);
    
    c = g(a, &b);
    printf("%d %d %d\n", a.x, b.x, c.x);

    return 0;
}