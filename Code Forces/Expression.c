#include<stdio.h>
int main(){
int a,b,c,arr[4],max=0;
scanf("%d%d%d",&a,&b,&c);
arr[0]=a*(b+c);
arr[1]=(a+b)*c;
arr[2]=a*b*c;
arr[3]=a+b+c;
for(int i=0;i<4;i++){
if(arr[i]>max)
max=arr[i];
}
printf("%d\n",max);
return 0;
}