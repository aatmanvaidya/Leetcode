#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;

while(t--){
	long long n;
	cin>>n;
	long long cnt=0;

	cnt = (n/4) * 44;

	int reminder = (n%4);
	if (n>=4)
	{
		if(reminder==0){
			cnt = cnt + 16;
		}
		if (reminder==1)
		{
			cnt +=32;
		}
		if (reminder==2)
		{
			cnt +=44;
		}
		if (reminder==3)
		{
			cnt+=55;
		}
		cout<<cnt<<endl;
	}
	else{
		int ans;
		if (reminder==1)
		{
			ans = 20;
		}
		if (reminder==2)
		{
			ans = 36;
		}
		if (reminder==3)
		{
			ans = 51;
		}
		cout<<ans<<endl;
	}

}
}