#include<cstdio>

using namespace std;
typedef long long LL;

const float pi = 3.1415926535;

float x, y;
int n;
float ans;

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%f%f", &x, &y);
		ans = 1.0 / 2.0 * pi * (x * x + y * y) / 50.0;
		if (ans != (int)ans)
			ans = (int)ans + 1;
		printf("Property %d: This property will begin eroding in year %d.\n", i, (int)ans);
	}
	printf("END OF OUTPUT.\n");
	return 0;
}
