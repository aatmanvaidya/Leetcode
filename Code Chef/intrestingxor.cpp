#include<bits/stdc++.h>
#include <iostream>  
#include<string>
#include<cstring>
using namespace std;

int binToDec(int n)
{
    int num = n;
    int decvalue = 0;
 
    int flag = 1;
 
    int temp = num;
    while (temp) {
        int lastdigi = temp % 10;
        temp = temp / 10; 
        decvalue += lastdigi * flag;
        flag = flag * 2;
    }
 
    return decvalue;
}

int decToBin(int dec) 
{  
    int binaryNum[100];  
    int i = 0; 
    while (dec > 0) {  
        binaryNum[i] = dec % 2; 
        dec = dec / 2; 
        i++; 
    }  
    for (int j = i - 1; j >= 0; j--){
        cout << binaryNum[j];
    }
   return 0;      
}

int main(){
    int t;
    cin>>t;
    while(t--){

    long long int c,cnt=0;
    cin>>c;
    char s[100];
    string s1;
    int m = decToBin(c);
    s1 = to_string(m);
    strcpy(s,s1.c_str());
    long long int d=strlen(s);
    cout<<s<<" "<<d<<"\n";
    char a[d-1],b[d-1];
    for(int i=0;i<d-1;i++){
        if(s[i]=='0'){
            a[i]='1';
            b[i]='1';
        }
        else if(s[i]=='1'){
            
            if(cnt%2==0){
                a[i]='1';
            b[i]='0';
            }
            else{
                a[i]='0';
                b[i]='1';
            }
            cnt++;
        }
        
    }
    char a1[d-1],b1[d-1];
    for(int i=0;i<d-1;i++){
            if(s[i]=='0'){
            a1[i]='1';
            b1[i]='1';
        }
        else if(s[i]=='1'){
            
            if(i%2==0){
            a1[i]='1';
            b1[i]='0';
            }
            else{
                a1[i]='0';
                b1[i]='1';
            }
        }
    }
    long long int aint,bint;
    aint=stoi(a);
    bint=stoi(b);

    long long int a1int,b1int;
    a1int=stoi(a1);
    b1int=stoi(b1);

    aint = binToDec(aint);
    bint = binToDec(bint);
    a1int = binToDec(a1int);
    b1int = binToDec(b1int);

/*     cout<<aint<<"\n";
    cout<<bint<<"\n";
    cout<<a1int<<"\n";
    cout<<b1int<<"\n"; */    

    cout<<max( (aint*bint), (a1int*b1int))<<"\n";

    }

}