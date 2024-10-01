/* prog0107.c */

#include <stdio.h>

#define N 10
int main(void)
{
    int data[N];
    int i;
    int count = 0;
    int sum = 0;
    float avg = 0.0;

    for (i = 0; i < N; i++) {

        scanf("%d", &data[i]);
        sum += data[i];

    }

    avg = sum / (float)N;

    for (int j = 0; j < N; j++) {

        if (avg > data[j]) {

            count++;

        }
    }

    printf("%d\n", count);

    return 0;
}