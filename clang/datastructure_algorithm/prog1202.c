/* prog1202.c */
#include <stdio.h>
#include <stdlib.h>

struct LIST {
  int data;
  struct LIST *next;
};

int count;
struct LIST *top;

void init(void)
{
  top = NULL;
  count = 0;
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

void delete_top()
{
  struct LIST *p;
  if( top != NULL ){
    p = top;
    top = top->next;
    free(p);
  }
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

void push(int n)
{
  /* ここに入力 */
  add_top(n);
  ++count;
}

int pop(void)
{
  int data;
  /* ここに入力 */
  if (count > 0) {
    data = top->data;
    delete_top();
    --count;
    return data;
  }
  printf("スタックは空です。\n");
  return -1;
}

int size(void)
{
  /* ここに入力 */
  return count;
}

int main(void)
{
  int i, n, v;

  /* リストを初期化 */
  init();
  /* スタックに積む個数を入力 */
  printf("n=");
  scanf("%d", &n);
  /* スタックに積む数を個数分 push する */
  for (i=1; i<=n; ++i) {
    scanf("%d", &v);
    push(v);
  }
  /* スタックから個数分 pop する */
  while( size() > 0 ){
    v = pop();
    printf("%d ", v);
  }
  printf("\n");
  /* 空のスタックから pop してみる */
  v = pop();
  printf("%d ", v);
  printf("\n");
  return 0;
}