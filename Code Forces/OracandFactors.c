/*
#include<stdio.h>
int main(){
int t=0;
long int n,k,i,f,sum;
scanf("%d",&t);
for(int r=0;r<t;r++){
scanf("%ld %ld",&n,&k);
i=2;
for(int x=0;x<k;x++){
while(i<=n){
if(n%i==0){
break;
}
i++;
}
f=n+i;
n=f;
}
printf("%ld\n",f);
}
return 0; 
}
*/
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    long long a,b,i,c=0;
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        for(i=2;i<=a;i++)
        {
            if(a%i==0){
                c=i;
                break;}
            else
                continue;
        }
        a=a+c;
        printf("%lld\n",a+2*(b-1));
        
    }
}