#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int fr[n+1] = {0};
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        fr[a[i]]++;
    }
    bool flag = true;
    for(int i =0;i<=n;i++)
    {
        if(fr[i]>=3)
        {
            flag = false;
            cout<<i<<"\n";
            break;
        }
    }
    if(flag) cout<<-1<<"\n";
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
