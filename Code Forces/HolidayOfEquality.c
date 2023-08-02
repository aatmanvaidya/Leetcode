
/*
#include<stdio.h>
int main(){
int n,a[n],mx=0,sum=0;
scanf("%d",&n);
for(int j=0;j<n;j++){
scanf("%d",&a[j]);
if(a[j]>mx)
mx=a[j];
else
continue;
}
for(int i=0;i<n;i++){
sum = sum + mx-a[i];
}
printf("%d",sum);     
return 0;
}
*/
// I have the pretty same code,but still the answer is wrong.
 
#include<stdio.h> 
int main()
{
int n,i,max=0,s=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>max)
{
max=a[i];
}
}
for(i=0;i<n;i++)
{
s=s+max-a[i];
}
printf("%d",s);
return 0;
}
