/* prog0304 */

#include <stdio.h>

void print_array(int data[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", data[i]);
    printf("\n");
}

void bubble_sort(int data[], int n)
{
    int i, j, t;
    print_array(data, n);
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (data[j] < data[j - 1])
            {
                int empty = data[j];
                data[j] = data[j - 1];
                data[j - 1] = empty;
            }
        }
        print_array(data, n);
    }
}

int main(void)
{
    int array_size = 8;
    int array[] = {4, 2, 7, 8, 1, 3, 6, 5};

    bubble_sort(array, array_size);

    return 0;
}