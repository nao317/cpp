#include <stdio.h>

int search (double key, double data[], int n) {
    int left = 0;
    int right = n - 1;
    int mid;
    while(left <= right) {
        mid = (left + right) / 2;
        printf("done\n");
        if (data[mid] == key) {
            return mid;
        } else if (data[mid] < key) {
            left = mid + 1;
        } else {
            right = mid -1;
        }
    }
    return -1;
}

int main(void) {
    double data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double x;
    int found;

    scanf("%lf", &x);
    found = search(x, data, 10);
    if (found >= 0) {
        printf("Found %f at data[%d]\n", x, found);
    } else {
        printf("Not found %f\n", x);
    }

    return 0;

}