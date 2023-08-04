#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    map<int,long long>mp;
    for(int i = 1;i<=q;i++)
    {
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    long long sum = 0;
    vector<long long>ans;
    for(int i = 1;i<=n;i++)
    {
        sum+=mp[i];
        ans.push_back(sum);
    }
    sort(ans.begin(),ans.end());
    sum = 0;
    for(int i =0;i<n;i++)
        sum+=(a[i]*ans[i]);
    cout<<sum<<"\n";
    return 0;
}