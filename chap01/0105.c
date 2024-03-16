#include <stdio.h>

int main(void)
{
  int n;

  printf("整数を入力してください：");
  scanf("%d", &n);

  printf("%dに13を加えると%dです。\n", n, n + 13);

  return 0;
}