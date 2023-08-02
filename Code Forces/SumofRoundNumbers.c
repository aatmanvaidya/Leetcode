#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
int n,t,i,j,l,k,arr[6],count;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
i=0;
count=0;
while(n>0){
arr[i]=n%10;
if(arr[i]!=0)
count++;
n=n/10;
i++;				
}
printf("%d\n",count);
for(j=0;j<i;j++){
if(arr[j]!=0){
l=1;
for(k=0;k<j;k++){
l*=10;					
}	
printf("%d ",arr[j]*l);
}		
if(arr[j]==0)
continue;
}
printf("\n");
}
return 0;
}