#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    pair<int,int>p[n];
    int a[n],b[n];
    for(int i =0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i =0;i<n;i++)
    {
        p[i] = {a[i],b[i]};
    }
    sort(p+0,p+n);
    for(int i =0;i<n;i++)
    {
        if(p[i].first<=k)
        {
            k+=p[i].second;
        }
    }
    cout<<k<<"\n";
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