/*
#include<stdio.h>   
#include<math.h>
int main(){
int t=0,a,b,c,d;
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%d %d %d %d",&a,&b,&c,&d);
if(pow((pow(a,2)+pow(b,2)),0.5)==pow((pow(c,2)+pow(d,2)),0.5))
{
printf("YE\n");
}
else if(pow((pow(a,2)+pow(d,2)),0.5)==pow((pow(c,2)+pow(b,2)),0.5))
{
 printf("YES\n");
}
else if(pow((pow(a,2)+pow(c,2)),0.5)==pow((pow(d,2)+pow(b,2)),0.5)){
 printf("YES");
}
else
{                                                                                                                                  
 printf("NO\n");
}
}
return 0;

}
*/


#include<stdio.h>
#include<stdlib.h>

int main(){

int num,i,j,sort,cart,a,b,c,d,tt;
scanf("%d",&tt);
while(tt--){

    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a*b==c*d){
        if(a==c&&b==d){



            printf("YES\n");
        }
        else if(a==d&&b==c){
                printf("YES\n");
        }
        else{
                 printf("NO\n");
        }
    }
    else if(a*c==b*d){
        if(a==b&&c==d){
            printf("YES\n");
        }
        else if(a==d&&b==c){
                printf("YES\n");
        }
        else{
                 printf("NO\n");
        }
    }
     else if(a*d==c*b){
        if(a==b&&c==d){
            printf("YES\n");
        }
        else if(a==b&&d==c){
                printf("YES\n");
        }
        else{
                 printf("NO\n");
        }
    }
    else{
        printf("NO\n");
    }

}

}
