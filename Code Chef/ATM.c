#include<stdio.h>
int main(){
    int a;
    float b,c;
    scanf("%d %f",&a,&b);
    
    
    if (a%5==0)
    {
        c=b-a-0.5;
        if(c<0)
        {
            printf("%0.2f",b);
        }
        else
        {
            printf("%0.2f",c);
        }
            
    }
    else
    {
        printf("%0.2f",b);
    }
    
    
    
    return 0;
}