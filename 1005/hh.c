#include <stdio.h>

int main()
{
    int n,a[100]={0},i,j;
    float x,y,z,sum;
    scanf("%d",&n);
    for (i=0;i<n; i++)
    {
        scanf("%f %f",&x,&y);
        z=(x*x+y*y)*3.1415926/2;
        sum=50;
        j=1;
        while(sum<z)
        {
            sum+=50;
            j++;
        }
        a[i]=j;
    }
    for (i=0; i<n; i++)
    {
        printf("Property %d: This property will begin eroding in year %d.\n",i+1,a[i]);
    }
    printf("END OF OUTPUT.\n");
    return 0;
}
