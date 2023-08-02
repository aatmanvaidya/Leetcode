/*
#include<stdio.h>
int main(){
long long int n,k,a[n],cnt;
scanf("%lld %lld",&n,&k);
for(int g=0;g<n;g++){
scanf("%lld",&a[g]);
}
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(a[i]+a[j]==k){
cnt=1;
break;
}
}
if(cnt==1)
break;
}
if(cnt==1)
printf("YES");
else
printf("NO");

return 0;
}
*/
#include<stdio.h>
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n,k,i,j;
		scanf("%lld %lld",&n,&k);
		long long int a[n];
		int flag=0;
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if((a[i]+a[j])==k){
					flag=1;
					break;
				}
			}
			if (flag==1){
				break;
			}
		}
		if(flag==1){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
}