#include <stdio.h>

int main() {
    float a[20],sum=0;
    int i;
    for (i=0; i<12; i++)
    {
        scanf("%f",&a[i]);
    }
    for (i=0; i<12; i++)
    {
        sum+=a[i];
    }
    printf("$%.2f",sum/12);
    return 0;
}
