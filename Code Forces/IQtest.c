/*
#include<stdio.h>
#include<stdlib.h>
int main(){
int n,cnt=0;
scanf("%d",&n);
int a[n];
for(int g=1;g<=n;g++){
scanf("%d",&a[g]);
}
for(int i=1;i<=n;i++){
if((a[i]%2!=0 && a[i+1]%2==0 && a[i-1]%2==0) || (a[i]%2==0 && a[i+1]%2!=0 && a[i-1]%2!=0)){
cnt=cnt+i;
break;
}
else 
continue;
}
printf("%d",cnt);
return 0;
}
*/
// my code is also similar to this but it is getting wrong on test case 5, the logic is pretty fare i think
#include<stdio.h>
 
int main()
{
    int n,x=0,y=0,p,q,i;
    scanf("%d",&n);
    int a[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2) x++,p=i;
        else y++,q=i;    }    
printf("%d",x<y?p:q);
}