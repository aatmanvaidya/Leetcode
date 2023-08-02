/*
#include<stdio.h>
int main(){
int n=0;
char a[5];
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%s",a);
if(a[1]=='+'){
n++;
}
else 
n--;
}
printf("%d",n);
return 0;
}
*/

#include<stdio.h>
int main()
{int n,x=0;
char c[5];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",&c);
		if(c[1]=='+')
			x++;
		else
			x--;
	}
	printf("%d", x);
}
