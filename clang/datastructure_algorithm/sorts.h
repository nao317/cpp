/* insertion sort and quick sort */

/* n個の要素を乱数で初期化する */
void init_array(double data[], int n);

/* data[s]からdata[e]までを表示する */
void print_array(double data[], int s, int e);

/* 挿入ソート */
void insertion_sort(double data[], int n);

/* クイックソート（挿入ソートと同じ引数）*/
void quick_sort(double data[], int n);