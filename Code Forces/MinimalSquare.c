#include<stdio.h>
int main(){
int t,a,b;
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%d %d",&a,&b);
if(a>b && a<=(2*b))
printf("%d\n",2*b*2*b);
else if(a==b)
printf("%d\n",2*b*2*b);
else if(a>b && a>2*b)
printf("%d\n",a*a);
else if(a<b && b>=2*a)
printf("%d\n",b*b);
else if(a<b && b<2*a)
printf("%d\n",2*a*2*a);


}
return 0;
}