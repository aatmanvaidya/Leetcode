#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> cord(n);
    float avg = 0;
    int totalSum = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> cord[i];
        avg+=cord[i];
    }

    // int start_cord = *min_element(cord.begin(), cord.end());
    // int end_cord = *max_element(cord.begin(), cord.end());
    // vector<int> dist;

    // for (int i = start_cord; i <= end_cord; i++)
    // {
    //     for (int j = start_cord + 1; j <= end_cord; j++)
    //     {
    //         int calc = pow((i-j),2);
    //         dist.push_back(calc);
    //     }
    // }
    // dist.erase(remove(dist.begin(), dist.end(), 0), dist.end());
    // cout<< *min_element(dist.begin(), dist.end()) << endl;

    avg = round(avg/n);
    for(int i=1;i<=n;i++){
        int sum;
        sum=pow((cord[i]-avg),2);
        totalSum += sum;
    }

    cout<<totalSum<<endl;

    return 0;
}