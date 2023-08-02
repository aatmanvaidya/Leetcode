#include<stdio.h>
int main(){
    long long int n,c;
    long int t=0,i;
    
    scanf("%ld",&t);
    for(i=0;i<t;i++){ 
    c=0;
    scanf("%lld",&n);
    while (n>0)
    {
        if(n%10==4)
        {
            c++;
        }
        n=(long long int)n/10;     
    }
      printf("%lld\n",c);
    }
           
    return 0;

}
