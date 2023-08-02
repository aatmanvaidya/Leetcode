#include<stdio.h>
int main(){
    int num,c,d;
    scanf("%d",&num);
    c=num-1;
    d=num+1;
    if(num%4==0)
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",c);
    }
    return 0;
    

}