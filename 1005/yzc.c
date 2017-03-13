#include<stdio.h>
int main()
{
    float a,b,pi=3.1415926;
    int c,d[100];
    scanf("%d",&c);
    for(int i=0;i<c;i++)
    {
    scanf("%f%f",&a,&b);
    d[i]=(((a*a+b*b)*pi)/100)+1;
    }
    for(int i=0;i<c;i++)
	printf("Property %d: This property will begin eroding in year %d.\n",i+1,d[i]);
    printf("END OF OUTPUT."); 
    return 0;
}
