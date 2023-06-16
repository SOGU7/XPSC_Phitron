#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++) cin>>v[i];
    ll count = 0;
    ll ans = 1;
    for(int i =0;i<v.size();i++)
    {
        if(v[i]>ans)
        { 
            count+=v[i] - ans;
            ans = v[i];
        }
        ans++;
    }
    cout<<count<<"\n";

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