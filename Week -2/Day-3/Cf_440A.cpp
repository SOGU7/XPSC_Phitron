#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int f[n+1] ={0};
    
    for(int i =0;i<n-1;i++)
    {
        int a;
        cin>>a;
        f[a]++;
    }
    for(int i = 1;i<=n;i++)
    {
        if(f[i] == 0)
        {
            cout<<i;
            break;
        }
    }
}

int main()
{
    fastread();
    solve();
     
    return 0;
}