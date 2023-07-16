#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n]; for(int i =0;i<n;i++) cin>>a[i];
    bool flag = true;
    for(int i =0;i<n-2;i++)
    {
        for(int j = i+1;j<n-1;j++)
        {
            for(int k = j+1;k<n;k++)
            {
                if((a[j]-a[i]) == (a[k]-a[j]))
                {
                    cout<<"NO\n";
                    flag = false;
                    return;
                }
            }
        }
    }
    if(flag) cout<<"YES\n";
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