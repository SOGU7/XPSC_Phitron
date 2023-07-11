#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int m,n;
    cin>>m;
    map<int,int>mp;
    for(int i = 1;i<=m;i++)
    {
        cin>>n;
        for(int j = 0;j<n;j++)
        {
            int a;
            cin>>a;
            mp[a] = i;
        }
    }
    map<int,int>mp1;
    for(auto i : mp)
    {
        mp1[i.second] = i.first;
    }
    if(mp1.size()<m) cout<<-1<<"\n";
    else
    {
        for(auto i : mp1)
        {
            cout<<i.second<<" ";
        }
        cout<<"\n";
    }
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