/* prog0305.c */
#include <stdio.h>

void print_array(int data[], int n)
{
    int i;
    for( i=0 ; i<n ; i++ )
        printf( "%d ", data[i] );
    printf( "\n" );
}

void insersion_sort(int data[], int n)
{
    int i, j, t;
    print_array( data, n );
    for( i = 1; i < n; i++ ){
        t = data[i];
        if( data[i-1] > t ){
            j = i;
            while(j > 0 && data[j - 1] > t){
               data[j] = data[j - 1];
               j--;
            }
            data[j] = t;
        }
        print_array( data, n );
    }
}


int main(void)
{
    int array_size = 8;
    int array[] = { 3, 1, 7, 2, 8, 5, 4, 6 };

    insersion_sort( array, array_size );

    return 0;
}