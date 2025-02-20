#include <stdio.h>
#define N 5

struct SDATA {
    int id;
    int eng;
    int math;
    int prog;
};

int comp_SDATA(struct SDATA s1, struct SDATA s2) {
    int sum1 = s1.eng + s1.math + s1.prog;
    int sum2 = s2.eng + s2.math + s2.prog;
    if (sum1 < sum2) {
        return -1;
    } else if (sum1 == sum2) {
        return 0;
    } else {
        return 1;
    }
}

void isort(struct SDATA S[], int n) {
    int i, j, r;
    struct SDATA ins;
    for (int i = 1; i < n; i++) {
        ins = S[i];
        r = comp_SDATA(S[i-1], S[i]);
        if (r < 0) {
            j = i;
            while (j >= 1 && r < 0) {
                S[j] = S[j-1];
                j--;
                r = comp_SDATA(S[j-1], ins);
            }
            S[j] = ins;
        }
    }
}

int main (void) {
    int i;
    struct SDATA D[N] = 
    {
    {1001, 90, 85, 70},
    {1002, 65, 80, 70},
    {1003, 80, 85, 75},
    {1004, 100, 70, 80},
    {1005, 80, 90, 65}
    };

    isort(D, N);

    for (i = 0; i < N; i++) {
        printf("ID:%d Total: %d\n", D[i].id, D[i].eng + D[i].math + D[i].prog);
    }

    return 0;

}