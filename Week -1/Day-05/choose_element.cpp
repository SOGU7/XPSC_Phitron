#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i =0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end(),greater<long long>());
    long long sum = 0;
    for(int i = 0;i<k;i++)
    {
        if(v[i]<0)
        {
            break;
        }
        sum+=v[i];
    }
    cout<<sum;
    return 0;
}