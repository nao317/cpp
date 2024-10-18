/* prog0405.c */
#include <stdio.h>

void swap(int d[], int x, int y)
{
    int empty = d[x];
    d[x] = d[y];
    d[y] = empty;
}

int partition(int d[], int left, int right)
{
  int i, j, pivot;

  pivot = d[right];
    
  i = left; j = right-1;
  while(i <= j){
    while(i <= j && d[i] <= pivot)
      i++;
    while(i <= j && d[j] >= pivot)
      j--;
    if (i < j) {
      swap(d, i, j);
    }
  }
  
  swap(d, i, right);

  printf("partition実行後のデータ: ");
  for ( j=left; j<=right; j++ ) {
    printf("%d ", d[j]);
  }
  printf("\n");
  printf("ピボットは左から%d番目の%d\n", i-left+1, d[i]);      
  
  return i;
}

int quick_sort(int data[], int left, int right)
{
  int p_index;

  if (left<right) {
    p_index=partition(data, left, right);
    
    quick_sort(data, left, p_index-1);
    quick_sort(data, p_index+1, right);
  }
}


void print_data(int data[])
{
  int i;

  for( i=0; i<15; i++)
    printf("%d ", data[i]);
  printf("\n");
}

int main(void)
{
  int data1[15] = {62,33,16,52,71,38,49,90,22,81,40,21,89,4,53};
  int data2[15] = {6,3,1,5,7,3,4,9,2,8,0,2,8,5,1};

  printf("*****入力データ*****\n");
  print_data(data1);
  quick_sort(data1, 0, 14);
  printf("*****ソート結果*****\n");
  print_data(data1);

  printf("*****入力データ*****\n");
  print_data(data2);
  quick_sort(data2, 0, 14);
  printf("*****ソート結果*****\n");
  print_data(data2);

  return 0;
}