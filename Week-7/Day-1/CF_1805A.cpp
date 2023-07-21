#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    bool ok = true;
    for(int x = 0 ;x<(1<<8);x++)
    {
        vector<int>b = a;
        for(int i =0;i<n;i++)
        {
            b[i] = b[i]^x;
        }
        int ans = 0;
        for(int i =0;i<n;i++)
        {
            ans = b[i]^ans;
        }
        if(ans == 0)
        {
            cout<<x<<"\n";
            ok = false;
            break;
        }
    }
    if(ok) cout<<-1<<"\n";
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