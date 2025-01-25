/* prog1402.c */
#include <stdio.h>
#include <stdlib.h>

struct TREE {
  int data;
  struct TREE *left;
  struct TREE *right;
};
struct TREE *root_ptr;

#define QUEUE_SIZE 100

int q_entry;
int q_exit;

struct TREE* queue[QUEUE_SIZE];

void enqueue(struct TREE* data)
{
  queue[q_entry] = data;
  q_entry++;
  if( q_entry >= QUEUE_SIZE ){
    q_entry = 0;
  }
}

struct TREE *dequeue(void)
{
  struct TREE* data = queue[q_exit];
  q_exit++;
  if( q_exit >= QUEUE_SIZE ){
    q_exit = 0;
  }
  return data;
}

int size(void)
{
  if( q_entry >=  q_exit ){
    return q_entry - q_exit;
  } else {
    return QUEUE_SIZE - q_exit + q_entry;
  }
}

int is_empty()
{
  if (q_entry == q_exit) {
    return 1;
  } else {
    return 0;
  }
}

void init(void)
{
  root_ptr = NULL;
  q_entry = 0;
  q_exit = 0;
}

void add_tree(int data)
{
  struct TREE *p;
  p = (struct TREE *)malloc(sizeof(struct TREE));
  p->data = data;
  p->left = NULL;
  p->right = NULL;
  if( root_ptr == NULL ){
    root_ptr = p;
  } else {
    struct TREE *node = root_ptr;
    while( node != NULL ){
      if( data < node->data ){
        if( node->left == NULL ){
          node->left = p;
          return;
        } else {
          node = node->left;
        }
      } else {
        if( node->right == NULL ){
          node->right = p;
          return;
        } else {
          node = node->right;
        }
      }
    }
  }
}

void pre_order(struct TREE *p)
{
  // pre orderでノードの値を出力する
  // ノードの値は  printf("%d ", p->data); のように出力する
  if (p != NULL) {
    printf("%d", p->data);
    pre_order(p->left);
    pre_order(p->right);
  }
}

void in_order(struct TREE *p)
{
  // in orderでノードの値を出力する
  // ノードの値は  printf("%d ", p->data); のように出力する
  if (p != NULL) {
    in_order(p->left);
    printf("%d", p->data);
    in_order(p->right);
  }
}

void post_order(struct TREE *p)
{
  // post orderでノードの値を出力する
  // ノードの値は  printf("%d ", p->data); のように出力する
  post_order(p->left);
  post_order(p->right);
  printf("%d", p->data);
}

void breadth_first(struct TREE *p)
{
  // 幅優先でノードの値を出力する
  // ノードの値は  printf("%d ", p->data); のように出力する
  // キューを使う（キューに必要な関数は作成済み）
  struct TREE *pt;

  enqueue(p);
  while (!is_empty()) {
    pt = dequeue(); // はじめの一番最初の要素？多分根の要素だろう
    if (pt != NULL) {
        printf("%d", pt->data);
        enqueue(pt->left);
        enqueue(pt->right);
    }
  }
}

int main(void)
{
  int n;
  init();

  printf("data=\n");
  scanf("%d", &n);
  while( n >= 0 ){
    add_tree(n);
    scanf("%d", &n);
  }

  printf("行きがけ順Pre-order): ");
  pre_order(root_ptr);
  printf("通りがけ順(In-order): ");
  in_order(root_ptr);
  printf("帰りがけ順(Post-order): ");
  post_order(root_ptr);
  printf("幅優先(Breadth-first): ");
  breadth_first(root_ptr);
  printf("\n");
	
  return 0;
}
