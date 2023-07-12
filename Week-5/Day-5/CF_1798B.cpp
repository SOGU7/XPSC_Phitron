#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i =1;i<=n;i++)
    {
        int m;
        cin>>m;
        for(int j =1;j<=m;j++)
        {
            int x;
            cin>>x;
            mp[x] = i;
        }
    }
    vector<int>a(n+1,-1);
    for(auto i :mp)
    {
        if(a[i.second] == -1)
        {
            a[i.second] = i.first;
        }
    }
    bool flag = true;
    for(int i =1;i<=n;i++)
    {
        if(a[i] == -1)
        {
            flag = false;
            break;
        }
    }
    if(!flag) cout<<-1<<"\n";
    else
    {
        for(int i =1;i<=n;i++)
            cout<<a[i]<<" ";
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