#include<stdio.h>
int main(){
int t=0;
long int a,b,c;
scanf("%d",&t); 	
for(int i=0;i<t;i++){
scanf("%ld %ld %ld",&a,&b,&c);
if((b>=a || b>=c) && (b<=a || b<=c)){
printf("%ld",b);
}
else if((a>=b || a>=c) && (a<=b || a<=c)){
printf("%ld",a);
}
else{
printf("%ld",c);
}
}
return 0;
}
/* #include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {    long a,b,c;
        scanf("%ld%ld%ld",&a,&b,&c);
        int ans;
       if((a>=b && a<=c) || (a>=c && a<=b))
       {ans=a;
       }
       else if((b>=a && b<=c) || (b>=c && b<=a))
       {ans=b;
       }
       else
       ans=c;
    printf("%ld\n",ans);
    }
	// your code goes here
	return 0;
}
                                        
*/