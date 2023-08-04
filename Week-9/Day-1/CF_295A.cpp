#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    vector<pair<pair<int,int>,int>>v(m);
    for(int i = 0;i<m;i++)
    {
        int l,r,d;
        cin>>l>>r>>d;
        v[i] = {{l,r},d};
    }
    map<int,long long>mp1;
    map<int,long long>mp2;
    while(k--)
    {
        int x,y;
        cin>>x>>y;
        mp2[x]++;
        mp2[y+1]--;
    }
    vector<long long>idx(m);
    long long sum = 0;
    for(int i = 1;i<=m;i++)
    {
        sum+=mp2[i];
        idx[i-1] = sum;
    }
    int i = 0;
    for(auto x : v)
    {
        pair<int,int>z = x.first;
        int d = x.second;
        mp1[z.first] += (idx[i]*d);
        mp1[z.second+1] -= (idx[i]*d);
        i++;
    }
    vector<long long>ans;
    long long sum1 = 0;
    for(i=1;i<=n;i++)
    {
        sum1+=mp1[i];
        ans.push_back(sum1);
    }
    for(int i =0;i<n;i++)
        cout<<ans[i]+a[i]<<" ";


    return 0;
}