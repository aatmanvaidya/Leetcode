#include<bits/stdc++.h>
using namespace std;
int main(){
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    if(d1==1 && d2==1){
        int a=v1+v2;
        int sum=1;
        while (a<p)
        {
            a+=a;
            sum+=1;
        }
        cout<<sum<<"\n";
    }
    else{
        int c=0,cnt=1;
        while(c<p){
            if(d1>=cnt && d2<cnt){
                c=c+v1;            }
            else if(d2>=cnt && d1<cnt){
                c=c+v2;
            }
            else if((d1 && d2)>=cnt){
                c=c+v1+v2;
            }
            cnt=cnt+1;   
            }
            cout<<cnt<<"\n";    
        }
        return 0;
    }
