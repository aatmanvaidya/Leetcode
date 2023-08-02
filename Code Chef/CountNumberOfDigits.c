#include<stdio.h>
int main(){
    long long num;
    int count=0;
    scanf("%lld",&num);
    while(num!=0){
        count++;
        num /= 10;
    }
    if(count==1){
        printf("1");
    }
    else if (count==2)
    {
        printf("2");
    }
    else if (count==3)
    {
        printf("3");
    }
    else
    {
        printf("More than 3 digits");
    }
    return 0;
    
    {
        
    }
    
    
        return 0;
}