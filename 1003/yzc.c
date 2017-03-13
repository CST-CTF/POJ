#include<stdio.h>
int main()
{
	float list[278],a=0.0,num;
	int date[100000]={0}; 
	for(int i=2;i<278;i++)
	{
	a=a+1.0/i;
	list[i-2]=a;
	}
    for(int i=0;;i++)
	{
	scanf("%f",&num);	
	if(num==0.00)break;//结束条件。
	for(int j=0;;j++)
	{
	if((num>list[j])==0)
	{
	date[i]=j+1;
	break;
    }
	}
	} 
	for(int i=0;;i++)
	{
	if(date[i]==0)break;
	printf("%d card(s)\n",date[i]);
    }
	return 0;
} 
