#include<stdio.h>
int main(){
int t=0;
scanf("%d",&t);
for(int i=0;i<t;i++){
int n,m,r=0;
scanf("%d",&n);
while(n>=1){
m=n%10;
r=r*10+m;
n/=10;
}
printf("%d\n",r);
if(r == n){
printf("wins\n");
}
else{
printf("losses\n");
}
}
return 0;
}
/*
#include <stdio.h>

int main(void) {
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int n,sum=0,temp;
        scanf("%d",&n);
        temp=n;
        while(n>0)
        {
            sum=(sum*10)+(n%10);
            n=n/10;
        }
       if(temp==sum)
       printf("wins\n");
       else
       printf("losses\n");
    }
	// your code goes here
	return 0;
}
*/ 
