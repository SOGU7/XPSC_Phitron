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
    vector<int>even;
    vector<int>odd;
    for(int i = 0;i<n;i++)
    {
        if(a[i]%2 == 0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }
    ll sum1 = 0;
    ll sum2 = 0;
    for(auto val : even) sum1+=val;
    for(auto val : odd) sum2+=val;
    ll ans = sum1+sum2;
    if(ans%2 == 0)
        cout<<ans;
    else
    {
        sort(odd.begin(),odd.end());
        ans -= odd[0];
        cout<<ans;
    }
}

int main()
{
    fastread();
    solve();
     
    return 0;
}