#include<stdio.h>
int main(){
int t=0;
scanf("%d",&t);
for(int i=0;i<t;i++){
long int a,b;
scanf("%ld %ld",&a,&b);
if(a==b)
printf("%ld\n",(a+b)/3);
else if(a>b){
if(a>2*b)
printf("%ld\n",b);
else
printf("%ld\n",(a+b)/3);
}
else{
if(b>2*a)
printf("%ld\n",a);
else
printf("%ld\n",(a+b)/3);
}
}
return 0;
}