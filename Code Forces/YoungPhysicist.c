/* 
#include<stdio.h>
int main(){
int t=0;
scanf("%d",&t);
for(int i=0;i<t;i++){
int x[3],y[3],z[3];
for(int k=0;k<3;k++){
scanf("%d %d %d",&x[k],&y[k],&z[k]);
}
}
return 0;
}  
*/ 
#include<stdio.h>
int main()
{
	int x=0,y=0,z=0,a,b,c,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&a,&b,&c);
		x += a;y += b; z += c;
	}
	if(x==0 && y==0 && z==0) printf("YES\n");
	else printf("NO\n");
	return(0);
}