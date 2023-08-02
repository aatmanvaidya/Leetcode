#include<stdio.h>
int main()
{
	int n,i,o,p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&o);
		p=p+o;
	}
	if(p==0)
	printf("EASY");
	else
	printf("HARD");
}