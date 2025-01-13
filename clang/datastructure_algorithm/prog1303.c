/* prog1303.c */
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



void display_tree(struct TREE *p)
{

  // プログラムを追加
  // プログラム中で、次のようにして値を出力します
  // printf("%d ", p->data);
  if (p != NULL) {
    display_tree(p->left);
    printf("%d ", p->data);
    display_tree(p->right);
  }
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

  display_tree(root_ptr);
  printf("\n");
  
  return 0;
}
