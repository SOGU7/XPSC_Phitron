#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int e_count = 0;
    int o_count = 0;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2 == 0) e_count++;
        else o_count++;
    }
    if(e_count == 0 || o_count == 0)
        cout<<"YES\n";
    else
    {
        int mini = INT_MAX;
        for(int i =0;i<n;i++)
            mini = min(mini,a[i]);
        if(mini%2!=0) cout<<"YES\n";
        else
            cout<<"NO\n";
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