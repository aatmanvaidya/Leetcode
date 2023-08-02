#include <stdio.h>
 
int main(void) {
	long long int x,y,a;
	scanf("%lld %lld %lld",&x,&y,&a);
	
	printf("%lld",((x+a-1)/a)*((y+a-1)/a));
	return 0;
}