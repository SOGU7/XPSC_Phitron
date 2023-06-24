#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,b;
    cin>>n>>b;
    int a[n];
    vector<int>ans;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        int z = a[i]&b;
        if(z == b) ans.push_back(a[i]);
    }
    if(ans.empty())
    {
        cout<<"NO\n";
        return;
    }
    int x = ans[0];
    for(int i = 1;i<ans.size();i++)
    {
        x = ans[i] & x;
    }
    if(x == b) cout<<"YES\n";
    else cout<<"NO\n";
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