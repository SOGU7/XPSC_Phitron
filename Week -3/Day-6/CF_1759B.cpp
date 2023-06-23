#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    int mx = INT_MIN;
    for(int i =0;i<n;i++) mx = max(mx,a[i]);
    vector<int>ans;
    for(int i =1;i<=mx;i++)
    {
        if(find(a.begin(),a.end(),i) == a.end())
        {
            ans.push_back(i);
        }
    }
    int sum = 0;
    for(auto i : ans)
    {
        sum+=i;
    }
    if(sum == m)
        cout<<"YES\n";
    else if(m-sum<mx)
        cout<<"NO\n";
    else if(m-sum>mx)
        cout<<"YES\n";
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