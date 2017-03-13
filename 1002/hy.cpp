#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
using namespace std;
typedef long long LL;
const int maxN = 1e5 + 10;
map<string , int>tel;
int n;
int flag = 0;
string a;
char get(char c)
{
	if (c >= 'A' && c <= 'P')
		return (c - 'A') / 3 + 2 + '0';
	if (c >= 'R' && c <= 'Y')
		return (c - 'A' - 1) / 3 + 2 + '0';
	if (c >= '0' && c <= '9')
		return c ;
	return c;
}
int main()
{
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n;)
	{
		a = "";
		for (int j = 0;;)
		{
			char x = getchar();
			char y = get(x);
			if (j == 3)
			{
				a += '-';
				j++;
			}
			if (y == '-')
				continue;
			if (y == '\n')
			{
				i++;
				tel[a]++;
				break;
			}
			a += y;
			j++;
		}
	}
	map<string, int>::iterator it;
	for (it = tel.begin(); it != tel.end(); it++)
	{
		if (it->second > 1)
		{
			flag = 1;
			cout << it->first << ' ' << it->second << endl;
		}
		else
			continue;
	}
	if (!flag)
		cout << "No duplicates.\n";
	return 0;
}
