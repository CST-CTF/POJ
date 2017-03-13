#include <stdio.h>
#include <stdlib.h>
#define len sizeof(struct tel)
struct tel{
    int count;              //计数
    int a[7];
    struct tel * next;
};

void Prin(int a[])          //打印出号码
{
    int i=0;
    for(;i<7;i++)
        printf("%d",a[i]);
}

void Scan(int a[])          //直接将输入的字符变为号码
{
    int i=0;
    char c;
    while(i<7)
    {
        scanf("%c",&c);
        if(c=='-')continue;
        if(c<='9'&&c>='0')
        {
            a[i]=c-'0';
            i++;
        }
        if(c>='A'&&c<='C')
        {
            a[i]=2;i++;
        }
        if (c>='D'&&c<='F') {
            a[i]=3;i++;
        }
        if(c>='G'&&c<='I')
        {
            a[i]=4;i++;
        }
        if (c>='J'&&c<='L') {
            a[i]=5;i++;
        }
        if (c>='M'&&c<='O') {
            a[i]=6;
            i++;
        }
        if (c=='P'||c=='R'||c=='S') {
            a[i]=7;i++;
        }
        if(c>='T'&&c<='V'){
            a[i]=8;i++;
        }
        if (c>='W'&&c<='Y') {
            a[i]=9;
            i++;
        }
        else continue;
    }
    Prin(a);
}
int Compare(int a[],int b[])             //比较号码是否一致
{
    int i,p=0;
    for (i=0; i<7; i++) {
        if (a[i]!=b[i])
        {
            break;
        }
    }
    if(i==7) p=1;
    return p;
}

struct tel * Creat(int n)
{
    int i=1,p;
    struct tel *head,*p1,*p2,*find;
    p1=p2=(struct tel *)malloc(len);
    head=p1;
    Scan(p1->a);
    p1->count=1;
    while(i<n) {
        p2=p1;
        p1=(struct tel *)malloc(len);
    loop:Scan(p1->a);
        i++;
        p1->count=1;
        p1->next=NULL;
        p2->next=p1;
        find=head;
        while(find->next!=NULL)
        {
            p=Compare(p1->a,find->a);
            if(p)
            {
                find->count++;
                goto loop;
            }
            find=find->next;
        }
    }
    return(head);
}

int main()
{
    int n;
    struct tel * pt;
    pt=(struct tel *)malloc(len);
    printf("请输入共多少条号码\n");
    scanf("%d",&n);
    printf("下面请输入号码\n");
    pt=Creat(n);
    do
    {
        if (pt->count>1)
        {
            Prin(pt->a);
            printf("    %d\n",pt->count);
        }
        pt=pt->next;
    }while (pt!=NULL);
}
/*在最后一次输入时输入有过的号码不会退出，会要求继续输入，原因在goto后直接下一个循环，没有对计数的i进行判断*／
