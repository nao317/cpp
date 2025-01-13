/* prog1105.c */
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

/* prog1103.c より add_top関数をコピーする */
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
    add_top(v);
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