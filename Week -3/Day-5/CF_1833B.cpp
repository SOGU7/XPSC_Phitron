#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    pair<int,int>a[n];
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i] = {x,i};
    }
    vector<int>b(n);
    for(int i =0;i<n;i++) cin>>b[i];
    sort(a+0,a+n);
    sort(b.begin(),b.end());
    
    vector<int>ans(n);
    for(int i =0;i<n;i++)
    {
        int x = a[i].second;
        ans[x] = b[i];
    }
    for(int  i =0;i<n;i++) cout<<ans[i]<<" ";
    cout<<"\n";
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