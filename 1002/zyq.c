#include <stdio.h>
#include <string.h>
#include <stdlib.h>	// to use qsort()

int comp(const void *a, const void *b)
{
  return strcmp(a, b);
}

int main()
{
  int num = 0, i = 0, j = 0, n, map[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
  scanf("%d", &num);
  char str[100000][8], tmp;
  for(i = 0; i < num; i++)
  {
    n = 0;
    while (n < 7)
    {
      scanf("%c", &tmp);
      while (tmp == '\n')
      scanf("%c", &tmp);
      if (tmp >= '0' && tmp <= '9')		
         str[i][n++] = tmp;
      else
      {
        if (tmp >= 'A' && tmp <= 'P' || tmp >= 'R' && tmp <= 'Y')
          str[i][n++] = map[tmp - 'A'] + '0';
      }
    }
    str[i][7] = '\0';
  }

  qsort(str, num, sizeof(str[0]), comp);

  int count = 1, flag = 0;
  i = 0;
  while (i < num)
  {
    if (strcmp(str[i], str[i + 1]) == 0)
    {
      flag = 1;
      count++;
    }
    else
    {
      if (count > 1)
        printf("%c%c%c-%s %d\n", str[i][0], str[i][1], str[i][2], str[i] + 3, count);
      count = 1;
    }
    i++;
  }

  // 注意审题，忘记了此种情况的输出
  if (flag == 0) printf("No duplicates.\n");
  return 0;
}
