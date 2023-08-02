#include<stdio.h>
int main(){
    int n,m,c,d;
    scanf("%d",&n);
    scanf("%d",&m);
    c=n+m;
    d=n-m;
    if(n>m)
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",c);
    }
    return 0;
    
}