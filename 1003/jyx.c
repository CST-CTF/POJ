#include<stdio.h>

float main()
{
      float a,sum=0.5;
      int n=1, num[100],i=0,k,b;
      scanf("%f",&a);
      while(a!=0.00)
	  {
		  n=1;
		  sum=0.5;
	    while(a>sum)
		  {
			
		++n;
        b=n+1;
        sum+=1.0/b;
			}
        num[i]=n;
         i++;
         scanf("%f",&a);
	  }	
          for(k=0;k<i;k++)
          printf("%d card(s)\n",num[k]);
	}
