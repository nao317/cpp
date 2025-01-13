/* prog1201.c */
#include <stdio.h>
#include <stdlib.h>

struct LIST {
  int data;
  struct LIST *next;
};
struct LIST *top;

void init(void)
{
  top = NULL;
}

/* 第11回 演習課題11-1 からadd_top() をコピーする */
void add_top(int n)
{
  struct LIST *temp = (struct LIST *)malloc(sizeof(struct LIST));
  temp->data = n;
  if (top == NULL) {
    temp->next = NULL;
    top = temp;
  } else {
    temp->next = top;
    top = temp;
  }
}

/* 第11回 演習課題11-3 からsearch() をコピーする */
struct LIST *search(int n)
{
    struct LIST *temp = top;
    while(temp != NULL) {
        if (temp->data == n) {
            return temp;
        } else {
            temp = temp->next;
        }
    }
    return NULL;
}

void print(void)
{
  struct LIST *p = top;
  while( p != NULL ){
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

void delete(struct LIST *delete)
{
    if (top == delete) {
        top = delete->next;
    } else {
        struct LIST *p = top;
        while (p->next !=  NULL) {
            if (p->next == delete) {
                p->next = p->next->next;
                break;
            }
            p = p->next;
        }
    }

    free(delete);
	
}

int main(void)
{
  int i, n, v, key;
  struct LIST *find;

  /* リストを初期化 */
  init();
  /* リストに追加する要素の個数を入力 */
  printf("n=");
  scanf("%d", &n);
  /* 値を読み込みリストに追加する */
  for (i=1; i<=n; ++i) {
    scanf("%d", &v);
    add_top(v);
  }
  print();

  /* 削除対象の値を読み込む */
  printf("delete=");
  scanf("%d", &key);

  /* 削除対象の値を探索する */
  find = search(key);
  if( find != NULL ){
    delete(find);
  } else {
    printf("not found\n");
  }
  print();
  return 0;
}
