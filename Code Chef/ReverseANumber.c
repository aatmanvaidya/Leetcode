#include<stdio.h>
int main(){
int t=0;
long int n,rem,r;
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%ld",&n);
while(n!=0){
rem = n%10;
r= r*10 + rem;
n/=10;
}
printf("%ld\n",r);
}
return 0;
}           
/*#include <stdio.h>

int main()
{
	int t;
    scanf("%d",&t);
    while(t--)
    {
      long int n, reverse=0, rem;
      scanf("%ld", &n);
      while(n!=0)
      {
         rem=n%10;
         reverse=reverse*10+rem;
         n/=10;
      }
      printf("%d\n",reverse);
    }
	return 0;
}
*/
