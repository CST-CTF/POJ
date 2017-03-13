#include<stdio.h>

float pi=3.1415926;

float main()
{
	int i,n,time[100];
	float r[100],x,y;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&x,&y);
        r[i]=x*x+y*y;
	    time[i]=((r[i])*pi)/100.0;
	}
	for(i=0;i<n;i++)
	{
		printf("Property %d: This property will begin eroding in year %d.\n",i+1,time[i]+1);
	}
	printf("END OF OUTPUT.\n");

}
