/* prog1302.c */
#include <stdio.h>
#include <stdlib.h>

struct TREE {
  int data;
  struct TREE *left;
  struct TREE *right;
};
struct TREE *root_ptr = NULL;

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

struct TREE *search_tree(int n)
{
    struct TREE *p = root_ptr;
    while (p != NULL) {
        if (p->data == n) {
            return p;
        } else if (p->data > n) {
            p = p->left;
        } else {
            p = p->right;
        }
    }
    return NULL;
}

int main(void)
{
  int n;

  printf("data=\n");
  scanf("%d", &n);
  while( n >= 0 ){
    add_tree(n);
    scanf("%d", &n);
  }

  printf("n=\n");
  scanf("%d", &n);

  struct TREE *p = search_tree(n);
  if( p != NULL ){
    printf("Found\n");
  } else {
    printf("Not found\n");
  }

  return 0;
}
