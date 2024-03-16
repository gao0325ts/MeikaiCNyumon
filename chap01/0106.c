#include <stdio.h>

int main(void)
{
  int n;

  printf("整数を入力してください：");
  scanf("%d", &n);

  printf("%dから7を減じると%dです。\n", n, n - 7);

  return 0;
}