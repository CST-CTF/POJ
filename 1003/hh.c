#include <stdio.h>
int main()
{
    int i,j=0;
    float sum,p;
    int a[1000]={0};
    scanf("%f",&p);
    while (p!=0.00) {
        i=2;
        sum=0.5;
        while (p>sum) {
            i++;
            sum+=1.0/i;
        }
        a[j]=i-1;
        j++;
        scanf("%f",&p);
    }
    j=0;
    while(a[j]!=0)
    {
        printf("%d card(s)\n",a[j]);
        j++;
    }
    return 0;
}
