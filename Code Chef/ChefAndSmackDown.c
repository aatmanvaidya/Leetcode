#include<stdio.h>
int main(){
    int t=0,c=0,f=0,k;
    scanf("%d",&t);
    
    for(c=0;c<t;c++){
        scanf("%d",&k);
        
    if(k==2010 || k==2015 || k==2016 ||k==2017 || k==2019)
        {
            printf("HOSTED\n");
        }
        else
        {
            printf("NOT HOSTED\n");
        }
        
    }

    
    return 0;
}