/*
#include<stdio.h>
int main(){
long long int n,sum=0;
scanf("%lld",&n);
char str[20][n];
for(int k=0;k<n;k++){
scanf("%s",str[k]);
}
for(int i=0;i<n;i++){
if(str[i]=="Tetrahedron")
sum = sum +4;
else if(str[i] == "Cube")
sum =sum +6;
else if(str[i] == "Octahedron")
sum = sum +8;
else if(str[i] == "Dodecahedron")
sum = sum +12;
else if(str[i] == "Icosahedron")
sum = sum + 20;
}
printf("%lld",sum);
return 0; 	 
}
*/

// I really do not know what has gone wrong with my code, the logic seems fine to me

#include <stdio.h>
int main(){
char l[13]; int x,s=0;
scanf("%d ",&x);
while(x--){
gets(l);
s+=l[0]=='T'?4:(l[0]=='C'?6:(l[0]=='O'?8:(l[0]=='D'?12:20)));
}
printf("%d",s);
}