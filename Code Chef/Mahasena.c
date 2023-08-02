#include<stdio.h>
int main(){
int t=0,n;
int arr[n];
int cnt=0,sum=0;
scanf("%d",&t);
for(int k=0;k<t;k++){
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int j=0;j<n;j++){
if(arr[j]%2==0)
cnt++;
else
sum++;
}                  
}
if(cnt>sum)
printf("READY FOR BATTLE" );
else
printf("NOT READY");
return 0;
}
/*#include <stdio.h>

int main(void)
{
	// your code goes here
	int n,x=0,y=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i]%2==0)
	    x++;
	    else
	    y++;
	}
	if((x-y)>0)
	printf("READY FOR BATTLE");
	else
	printf("NOT READY");
	return 0;
}


*/ 