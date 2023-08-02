/*
#include<stdio.h>
int main(){
int t=0;
long long int a,b,cnt=0;
scanf("%d",&t);
for(int y=0;y<t;y++){
scanf("%d%d",&a,&b);
a=a%b;
if(a==0)
printf("0\n");
else 
printf("%d\n",b-a);
}
return 0;
}
*/
// the logic is pretty similar but still it is showing wrong answer on test case 1
#include<stdio.h>
int main()
{
int i,t,a,b;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d %d",&a,&b);
if(a%b==0)
printf("0\n");
else
printf("%d\n",b-a%b);
}
 
return 0;
}