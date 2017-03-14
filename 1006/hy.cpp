#include<cstdio>

using namespace std;
typedef long long LL;

const int _p = 23;
const int _e = 28;
const int _i = 33;

int p, e, i, d;
int x;
int flag = 1;

int main()
{
	scanf("%d%d%d%d", &p, &e, &i, &d);
	while (p >= 0)
	{
		x = d;
		while (true)
		{
			++d;
			if ((d - p) % _p == 0 && (d - e) % _e == 0 && (d - i) % _i == 0)
			{
				printf("Case %d: the next triple peak occurs in %d days.\n", flag++, d - x); 
				break;
			}
		}
		scanf("%d%d%d%d", &p, &e, &i, &d);
	}
	return 0;
}
