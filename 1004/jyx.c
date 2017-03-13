#include<stdio.h>

double main()
{
	int i;
	float sum=0,money;
	for(i=0;i<12;i++)
	{
		scanf("%f",&money);
		sum=money+sum;
	}
	printf("$%.2f\n",sum/12);
}
