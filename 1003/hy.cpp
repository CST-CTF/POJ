#include<cstdio>

using namespace std;
typedef long long LL;

float n;
int i = 2;
float sum = 0;

int main()
{
	scanf("%f", &n);
	while (n != 0)
	{
		sum = 0;
		i = 2;
		while (sum < n)
		{
			sum += 1.0 / (float)i;
			i++;
		}
		printf("%d card(s)\n", i - 2);
		scanf("%f", &n);
	}
	return 0;
}
