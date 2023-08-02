#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int sum=0;
	    sum=sum+n/100;
	    n=n%100;
	    sum=sum+n/50;
	    n=n%50;
	    sum=sum+n/10;
	    n=n%10;
	     sum=sum+n/5;
	    n=n%5;
	     sum=sum+n/2;
	    n=n%2;
	    sum=sum+n;
	    printf("%d\n",sum);
	    
	    
	    
	}
	return 0;
}



