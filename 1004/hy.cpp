#include<cstdio>

using namespace std;
typedef long long LL;

float ba;
float x;
int main()
{
	for (int i = 0; i < 12; i++)
	{
		scanf("%f", &x);
		ba += x;
	}
	printf("$%.2f\n", ba / 12);
	return 0;
}
