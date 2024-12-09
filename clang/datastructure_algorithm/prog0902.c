/* prog0902.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUEUE_SIZE 5

int q_entry;
int q_exit;
int q_count;

int queue[QUEUE_SIZE+1]; /* テスト用に+1している */

void init(void)
{
  q_entry = 0;
  q_exit = 0;
  q_count = 0;
  queue[QUEUE_SIZE] = -1; /* テスト用 */
}

int size(void)
{
  return q_count;
}

void enqueue(int data)
{
  if (q_count < QUEUE_SIZE) {

    queue[q_entry] = data;
    q_entry++;
    q_count++;

    if (q_entry >= QUEUE_SIZE) {
        q_entry = 0;
    }
  } else { /* エラー処理 */
    printf("キューは満杯です。\n%dはenqueueできませんでした。\n",data);
  }
}

int dequeue(void)
{
  int data;

  if (q_count > 0) {

    q_count--;
    data = queue[q_exit];
    q_exit++;
    if (q_exit >= QUEUE_SIZE) {
        q_exit = 0;
    }
    return data;
    
  } else { /* エラー処理 */
    printf("キューは空です。\n");
    return -1;
  }
}

int main(void)
{
  char buf[BUFSIZ]; /* 文字入力用変数 */
  int data;

  init(); /* キューの初期化 */

  while ( scanf("%s", buf) > 0 ) {
    if (!strcmp(buf, "q") || !strcmp(buf, "quit") ) { /* 終了 */
      /* キューに残っているデータを表示して終了する */      
      printf("Queue:");
      while (size() > 0)
	    printf(" %d", dequeue());
      printf("\n");      
      exit(0);
    } else if (!strcmp(buf, "dequeue") || !strcmp(buf, "deq")) { /* dequeue */
      printf("DEQUEUE: %d\n", dequeue());
    } else if ( (data = atoi(buf)) > 0) { /* 0以上の数字は、enqueueとする */
      enqueue( data );
      if (queue[QUEUE_SIZE] != -1) { /* テスト用 */
	printf("プログラムのエラーです\n");
	exit(0);
      }
    } else {
      printf("入力間違い: %s\n", buf);
    }
  }

  return 0;
}