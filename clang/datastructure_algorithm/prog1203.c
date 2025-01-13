/* prog1203.c */
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

/* 第11回 演習課題11-2 からadd_bottom() をコピーする */
void add_bottom(int n)
{
    struct LIST *p;
    struct LIST *temp = (struct LIST*)malloc(sizeof(struct LIST));
    temp->data = n;
    temp->next = NULL;
    if (top == NULL) {
        top = temp;
    } else {
        p = top;
        while(p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
    }
}

void delete_top()
{
  struct LIST *p;
  if( top != NULL ){
    p = top;
    top = p->next;
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

void enqueue(int n)
{
  /* ここに入力 */
  add_bottom(n);
  ++count;
}

int dequeue(void)
{
  int data;
  /* ここに入力 */
  if (count > 0) {
    data = top->data;
    delete_top();
    --count;
    return data;
  }
  printf("キューは空です\n");
  return -1
}

int size(void)
{
  /* ここに入力 */
  return count;
}

int main(void)
{
  int i, n, v;

  init();
  /* キューに積む個数を入力 */
  printf("n=");
  scanf("%d", &n);
  /* キューに積む数を個数分 enqueue する */
  for (i=1; i<=n; ++i) {
    scanf("%d", &v);
    enqueue(v);
  }
  /* キューから個数分 dequeue する */
  while( size() > 0 ){
    v = dequeue();
    printf("%d ", v);
  }
  printf("\n");
  /* 空のキューから dequeue してみる */
  v = dequeue();
  printf("%d ", v);
  printf("\n");
  return 0;
}
