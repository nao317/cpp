/* prog1106.c */
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

void add_sorted(int n)
{
  struct LIST *p, *q;
  q = (struct LIST*)malloc(sizeof(struct LIST));
  q-> data = n;
  q-> next = NULL;
  if (top == NULL) {
    top = q;
  } else if (top->data > n) {
    q->next = top;
    top = q;
  } else {
    p = top;
    while(p->next != NULL && p->next->data < n) {
        p = p->next;
    }
    q->next = p->next;
    p->next = q;
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

/* prog1105.c より search関数をコピーする */
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
}

int main(void)
{
  int i, n, v, key, sw;
  struct LIST *find;

  init();
  printf("n=");
  scanf("%d", &n);
  for (i=1; i<=n; ++i) {
    scanf("%d", &v);
    add_sorted(v);
  }
  print();

  printf("search=");
  scanf("%d", &key);

  find = search(key);
  if( find != NULL ){
    printf("found %d\n", find->data);
  } else {
    printf("not found\n");
  }

  return 0;
}
