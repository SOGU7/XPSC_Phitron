#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    map<int,int>mp;
    for(int i =1;i<=n;i++) 
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a+1,a+n+1);
    int ans = 0;
    int k = 0;
    for(int i =1;i<=n;i++)
    {
        if(mp[a[i]] == 0) continue;
        if(a[i-1]!=a[i]-1) k =0;
        if(mp[a[i]]>k) ans+=mp[a[i]]-k;
        k = mp[a[i]];
        mp[a[i]] = 0;
    }
    cout<<ans<<"\n";
}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}