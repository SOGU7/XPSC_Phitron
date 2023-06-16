#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    int k; cin>>k;
    vector<int>pre_sum(n);
    pre_sum[0] = a[0];
    for(int i =1;i<n;i++) pre_sum[i] = pre_sum[i-1]+a[i];
    unordered_map<int,int>mp;
    mp[0] =-1;
    int sum = 0;
    int i = 0,j=0;
    int ans = 0;
    while(j<n)
    {
        sum = pre_sum[j];
        if(mp.find(sum-k) == mp.end())
        {
            if(mp.find(sum) == mp.end())
            {
                mp[sum] = j;
            }
        }
        else
        {
            ans = max(ans,j-mp[sum-k]);
            if(mp.find(sum) == mp.end())
            {
                mp[sum] = j;
            }
        }
        j++;
    }
    cout<<ans;


}

int main()
{
    fastread();
    solve();
     
    return 0;
}