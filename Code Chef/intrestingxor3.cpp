#include<bits/stdc++.h>
#include <sstream>
using namespace std;

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n!=0)
    {
        remainder = n%2;
       // cout << "Step " << step++ << ": " << n << "/2, Remainder = " << remainder << ", Quotient = " << n/2 << endl;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

long long int lenght(long long int n){
    long long int cnt=0;
    while (n!=0)
    {
        n=n/10;
        cnt++;
    }
    return cnt;
}

int main(){
    long long int c;
    cin>>c;
    long long int cbin = convertDecimalToBinary(c);
    long long int d= lenght(cbin);
    //cout<<d;
    int s[d];
    for(int i=0;i<d;i++){
        if(i==0){
            s[i]=0;
        }
        else{
            s[i]=1;
        }
        
    }
/*     for(int i=0;i<d;i++){
        cout<<s[i];
    }   */

    int a[100];
    int j=0;
    while(cbin){
        a[j++] = cbin % 10; 
        cbin /= 10;
    } 
    for(int i=0;i<d;i++){
        cout<<a[i];
    }
}