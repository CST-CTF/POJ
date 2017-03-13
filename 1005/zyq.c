// 土地以每年50平方英里的速度以一个半圆形减小
#include <stdio.h>

int main()
{
  int n, year[100];
  float x, y, area;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    int n = 1;
    scanf("%f %f", &x, &y);
    area = (x*x + y*y)*3.14 / 2;
    year[i] = area / 50 + 1;
  }
    
  for (int i = 0; i < n; i++)
    printf("Property %d: This property will begin eroding in year %d.\n", i+1, year[i]);
  printf("END OF OUTPUT.\n");
  return 0;
}
