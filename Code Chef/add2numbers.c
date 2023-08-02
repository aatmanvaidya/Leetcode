#include<stdio.h>
int main()
{
    int a,b,c,t,f;
    scanf("%d",&t);
    int d[t];
    printf("\n");
    for(c=0;c<t;c++)
    {
        scanf("%d %d",&a,&b);
        d[c]=a+b;
        printf("\n");
    }
    for(f=0;f<t;f++)
    {
        printf("%d\n",d[f]);
    }
    return 0;
}
