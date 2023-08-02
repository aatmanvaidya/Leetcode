#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)  
{
    int num = n;
    int ans = 0;
    int flag = 1;
 
    int temp = num;
    while (temp) {
        int lastDigit = temp % 10;
        temp = temp / 10;
 
        ans += lastDigit * flag;
 
        flag = flag * 2;
    }
 
    return ans;
}
int main(){
    int n;
    cin>>n;
    char set={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
    char s[n];
    cin>>s;   
    for(int i=0;i<n;i=i+4){
        
    }
} 



/* // C++ program to convert binary to decimal
#include <iostream>
using namespace std;
 
// Function to convert binary to decimal
int binaryToDecimal(int n)  
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
 
// Driver program to test above function
int main()
{
    int num = 1111;
 
    cout << binaryToDecimal(num) << endl;
} */