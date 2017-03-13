// 注意数值的初始化问题
#include <stdio.h>

int main()
{
  float a, sum = 0.00;
  int i = 0, n = 0, num[500] = {0};
  scanf("%f", &a);
  while(a != 0.00)
  {
    i = 2;
    sum = 0.00;
    while(sum <= a)
    {
      sum += (float)1/i;
      i++;
    }
    num[n++] = i - 2;
    scanf("%f", &a);
  }

  i = 0;
  while (num[i] != 0)
  {
    printf("%d card(s)\n", num[i]);
    i++;
  }
  return 0;
}
