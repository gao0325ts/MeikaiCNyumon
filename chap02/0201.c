#include <stdio.h>

int main(void)
{
  int x, y;

  puts("二つの整数を入力せよ。");
  printf("整数x：");  scanf("%d", &x);
  printf("整数y：");  scanf("%d", &y);

  printf("xの値はyの値の%d%%です。\n", x * 100 / y);
  // 先に100をかけないと切り捨ての影響を受ける

  return 0;
}