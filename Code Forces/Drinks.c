/*
#include<stdio.h>
int main(){
int n;
long double sum=0;
scanf("%d",&n);
long double p[n];
for(int j=0;j<n;j++){
scanf("%lf",&p[j]);
}
for(int i=0;i<n;i++){
sum =sum + (p[i]/100);
}
long double k;
k=sum/n;
printf("%0.12lf",k);
return 0;
}
*/
// the logic is apparently rigth, but there is some problem with code
#include<stdio.h>
int main()
{
float j,k,c,sum=0;
scanf("%f",&k);
for (j=1;j<=k;j++)
{
scanf("%f",&c);
sum=sum+c;
}
printf("%f",sum/k);
}