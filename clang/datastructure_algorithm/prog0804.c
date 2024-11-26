/* prog0804.c */

#include <stdio.h>

char *string_n_copy(char *dst, char *src, int n) 
{
  char *p = dst;
  int i = 0;
  while(*src != '\0' && i != n) {
    *dst = *src;
    dst++;
    src++;
    i++;
  }
  *dst = '\0';
  return p;
}

int main (void) 
{
  char buf[] = "aaaaaaaaaaaaaa"; /* テスト用 */
  char str[10];
  int  n;

  scanf("%s", str); /* 文字列 */
  scanf("%d", &n);  /* 文字数 */

  printf("%s\n", string_n_copy(buf, str, n));
  
  return 0;
}