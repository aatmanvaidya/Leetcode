#include <stdio.h>
int main()
{
char a;
while(a!='\n')
{
a=getchar();
if(a=='H'||a=='Q'||a=='9')
{
printf("YES");
return 0;
}
}
printf("NO");
return 0;
}