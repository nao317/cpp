/* prog1401.c */
#include <stdio.h>
#include <stdlib.h>

struct TREE {
  int data;
  struct TREE *left;
  struct TREE *right;
};
struct TREE *root_ptr;

void init(void)
{
  root_ptr = NULL;
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

int search_max(struct TREE *tree)
{
  // treeで示される木を探索し、最大値を返す
  struct TREE *p = tree;

  while (p != NULL) {
    if (p->right == NULL) {
        return p->data;
    } else {
        p = p->right;
    }
  }
  return 0;

}

void delete_node(int n, struct TREE **tree)
{
  struct TREE **p = tree;
  while(*p != NULL) {
    if( (*p)->data == n ){
      struct TREE *delete =*p;
      if(((*p)->left == NULL) && ((*p)->right == NULL)) {
        *p = NULL;
        free(delete);
      } else if ((*p)->left == NULL) {
        *p = (*p)->right;
        free(delete);
      } else if ((*p)->right == NULL) {
        *p = (*p)->left;
        free(delete);
      } else {
        int max = search_max((*p)->left);
        delete_node(max, p);
        (*p)->data = max;
      }
      return;
    } else if( n < (*p)->data ) {
      p = &((*p)->left);
    } else { /* n > p->data */
      p = &((*p)->right);
    }
  }
}


void print_tree(struct TREE *p)
{
  if( p != NULL ){
    print_tree(p->left);
    printf("%d ", p->data);
    print_tree(p->right);
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

  print_tree(root_ptr);
  printf("\n");

  printf("delete=\n");
  scanf("%d", &n);
  delete_node(n, &root_ptr);

  print_tree(root_ptr);
  printf("\n");

  return 0;
}
