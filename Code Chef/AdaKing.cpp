 #include <iostream>
using namespace std;

int main() {
long long int t;
cin>>t;
while(t--)
{
int k;
cin>>k;
int cnt=0;
for(int i=0;i<8;i++)
{
for(int j=0;j<8;j++)
{
cnt++;
if(cnt==k)
{
cout<<"O";
}
else if(cnt<k)
{
cout<<".";
}
else
cout<<"X";
}
cout<<"\n";
}
}                                                                 
}