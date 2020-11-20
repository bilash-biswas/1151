#include<stdio.h>
int main()
{
    int a,b,c,i,d;
    scanf("%d",&a);
    b=0;
    c=1;
    printf("%d %d",b,c);
    for(i=3;i<=a;i++)
    {
        d=b+c;
        printf(" %d",d);
        b=c;
        c=d;

    }
    printf("\n");

    return 0;
}

