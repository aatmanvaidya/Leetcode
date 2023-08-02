
# include <stdio.h>
# include <math.h>
int main()
{
int d,t;
scanf("%d",&t);
while(t--)
{
scanf("%d",&d);
int k=d*d;
int D=k-4*d;
if(D<0)
{
printf("N\n");
continue;
}
long  double k1=sqrt(D);
long double a1=(d-k1)/2;
printf ("Y ");
printf("%0.9Lf %0.9Lf\n",d-a1,a1);
}
return 0;
}