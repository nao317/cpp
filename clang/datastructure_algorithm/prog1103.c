/* prog1103.c */
#include <stdio.h>
#include <stdlib.h>

struct LIST {
  int data;
  struct LIST *next;
};

struct LIST *top;

void init()
{
  top = NULL;
}

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

void print(void)
{
  struct LIST *p = top;
  while( p != NULL ){
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main(void)
{
  int i, n, v;
  init();
  printf("n=");
  scanf("%d", &n);
  for (i=1; i<=n; ++i) {
    scanf("%d", &v);
    add_top(v);
  }
  print();
  return 0;
}