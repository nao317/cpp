/* prog0901.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 5

int sp;
int stack[STACK_SIZE];

void init(void)
{
  sp = 0;
}

int size(void)
{

  return sp;
  
}

void push(int data)
{
  if (sp < STACK_SIZE) {

    stack[sp] = data;
    sp++;
    
  } else { /* エラー処理 */
    printf("スタックは満杯です。\n%dはpushできませんでした。\n", data);
  }
}

int pop(void)
{
  if (sp > 0) {

    sp--;
    return stack[sp];

  } else { /* エラー処理 */
    printf("スタックは空です。\n");
    return -1;
  }
}

int main(void)
{
  char buf[BUFSIZ]; /* 文字入力用変数 */
  int data;
  
  init(); /* スタックの初期化 */
  
  while ( scanf("%s", buf) > 0 ) {
    if (!strcmp(buf, "q") || !strcmp(buf, "quit") ) { /* 終了 */
      /* スタックに残っているデータを表示して終了する */
      printf("Stack:");
      while (size() > 0)
	    printf(" %d", pop());
      printf("\n");
      exit(0);
    } else if (!strcmp(buf, "pop")) { /* pop */
      printf("POP: %d\n", pop());
    } else if ( (data = atoi(buf)) > 0) { /* 0以上の数字は、pushとする */
      push( data );
    } else {
      printf("入力間違い: %s\n", buf);
    }
  }
  
  return 0;
}