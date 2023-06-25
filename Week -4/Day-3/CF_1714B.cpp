#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int>s;
    vector<int>a(n);
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    bool ok = true;
    for(int i = n-1;i>=0;i--)
    {
        if(s.count(a[i]))
        {
            cout<<i+1<<"\n";
            ok = false;
            break;
        }
        s.insert(a[i]);
    }
    if(ok) cout<<0<<"\n";
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