#include <stdio.h>
int main()
{
int t;
scanf("%d", &t);
for (int i = 0; i < t; ++i)  
{
int h,p;
scanf("%d %d", &h,&p);
h=h-p;
p-p/2;
if (h>p)
{
printf("0\n");
}
else{
printf("1\n");
}
}
return 0;
}