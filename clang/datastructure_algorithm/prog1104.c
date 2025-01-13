/* prog1104.c */

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
    add_bottom(v);
  }
  print();

  return 0;
}