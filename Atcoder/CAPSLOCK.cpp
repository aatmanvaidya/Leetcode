// #include<bits/stdc++.h>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string str;
    // cin>>str;
    getline(cin, str);
    for(char& c : str){
        c = toupper(c);
    }
    std::cout << str << endl;
    return 0;
}