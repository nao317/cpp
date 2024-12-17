/* insertion sort and quick sort */

#include <stdio.h>
#include <stdlib.h>
#include "sorts.h"

/* n個の要素を乱数で初期化する */
void init_array(double data[], int n)
{
  int i;
  double r;

  /* 乱数のシードを固定する */
  srand48(7);

  for (i=0; i<n; i++) {
    /* 0 から 10000 未満の乱数を設定する */
    r = drand48() * 10000;
    data[i] = r;
  }
}

/* data[s]からdata[e]までを表示する */
void print_array(double data[], int s, int e)
{
    int i;
    for( i=s ; i<e ; i++ )
        printf( "%f ", data[i] );
    printf( "\n" );
}

/* 挿入ソート */
void insertion_sort(double data[], int n)
{
    int i, j;
    double t;
    for( i=1 ; i<n ; i++ ){
        t = data[i];
        if( data[i-1] > t ){
            j = i;
            while( j>0 && data[j-1] > t ){
            data[j] = data[j-1];
            j--;
        }
        data[j] = t;
        }
    }
}

/* クイックソート関係の関数 */

/* スワップ関数（パーティション関数で使う） */
void swap_items( double data[], int x, int y)
{
  double tp;

  tp = data[x];
  data[x] = data[y];
  data[y] = tp;
}

/* パーティション関数（クイックソートで使う） */
int partition_items( double data[], int left, int right) 
{
  int i, j;
  double pp;

  pp = data[right];

  i = left; j = right;
  while ( i<=j ) {
    while ( data[i] < pp )
      i++;
    while ( ( pp <= data[j] ) && (j>=i) )
      j--;
    if ( i<j ) {
      swap_items(data, i, j);
    }
  }
  swap_items(data, i, right);

  return i;
}

/* クイックソート */
void qsort_items( double data[], int left, int right)
{
  int p_index;
  
  if ( left<right ) {
    p_index = partition_items(data, left, right);
    qsort_items(data, left, p_index-1);
    qsort_items(data, p_index+1, right);
  }
}

/* クイックソート（挿入ソートと同じ引数） */
void quick_sort( double data[], int n)
{
  qsort_items(data, 0, n-1);
}
