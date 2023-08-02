#include<stdio.h>
#include<string.h>
int main(){
int t=0;
char v[1000001],l[1000001],r[1000001];
scanf("%d",&t);
for(int h=0;h<t;h++){
scanf("%s",v);
for(int i=0;i<strlen(v);i++){
l[i]=v[i-1];
r[i]=v[i+1];
}
if(strcmp(l,r)==0)
printf("YES");
else
printf("NO");
}
return 0;
}

/*#include <stdio.h>
#include <string.h>

int main(void) {
    int i,t;
    char s[1000005],x[1000005],y[1000005];
    
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%s",s);
	    memset(x,'\0',1000005);
        memset(y,'\0',1000005);
	    int l = strlen(s);
	    for(i=0;i<l-1;i++)
	    {
	        x[i]=s[i+1];
	        y[i+1]=s[i];
	    }
	    x[l-1]=s[0];
	    x[l]='\0';
	    y[0]=s[l-1];
	    y[l]='\0';

	if(strcmp(x,y)==0)
        printf("YES\n");
    else
        printf("NO\n");

	}


	return 0;
}

*/
