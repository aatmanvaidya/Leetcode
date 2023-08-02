#include<stdio.h>
int main(){
    int b,n,t=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){ 
    scanf("%d",&b);
    if(b%2==0)
    {
        n=(b*b-2*b)/8;
        printf("%d\n",n);
    }
    else
    {
        n=((b-1)*(b-1)-2*(b-1))/8;
        printf("%d\n",n);
    }
    }   
    
    
    return 0;

}
