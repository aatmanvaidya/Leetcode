#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int a, b;
	for(int i =0;i<n;i++) {
	    scanf("%d %d", &a,&b);
	    if(a >b) {
	        printf(">\n");
	    }
	    else if(a < b) {
	        printf("<\n");
	    }
	    else {
	        printf("=\n");
	    }
	}
	return 0;
}

