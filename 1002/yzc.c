#include<stdio.h>
	#include <algorithm>  
	using namespace std;                                             //好像就是sort函数的头文件。来自网上的大佬算法。 
	int list[30]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,9};//这个制表的方法简练的多，PAT里也有类似的题目，但没能联想到。 
	int date[100000];                                                //原来的是用switch函数转换成数字。 
	int main()
	{
	int a;
	char e[300];
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
	scanf("%s",e);
	date[i]=0;
	for(int j=0;e[j]!='\0';j++)  //这种for循环的形式也没用过，感觉更好用一点。
	if(e[j]>='0'&&e[j]<='9')date[i]=date[i]*10+e[j]-'0';  
	else if(e[j]>='A'&&e[j]<='Z')date[i]=date[i]*10+list[e[j]-'A']; //原来是使用结构体数组进行比较，如果不一样就存入，一样就在这个结构体数组的计数数据里加1. 
	//算法常见但更简练，值得学习。 
	}
	sort(date,date+a);  //sort函数自动排序区间内数据。qwq果然是转化七位数在比较简单又快。 
	//http://www.cnblogs.com/sooner/archive/2012/04/18/2455279.html
	int flag=1,count;  //int一个flag来代替bool变量，这我倒是算常用。 
	count=1;  
	int j;  
	for(j=1;j<a;j++)
	{  
	if(date[j]==date[j-1])  //重复 
	count++;   
	else  
	{  
	if(count>1)  
	{  
	printf("%03d-%04d %d\n",date[j-1]/10000,date[j-1]%10000,count);  
	flag=0;  
	}  
	count=1;
	}  
	}  
	if(count>1)  
	{  
	printf("%03d-%04d %d\n",date[j-1]/10000,date[j-1]%10000,count); //这种printf的形式也比较少见。 算法变了，输出方式肯定也变。 
	flag=0;  //这里网上是用的bool变量。 就是标记是否有输出。 
	}  
	if(flag)  
	printf("No duplicates.\n");
	return 0;  
	}  
	//算法完全不一样。。。=.= 。。。感觉被血虐了一下午，好气啊。。。。 
