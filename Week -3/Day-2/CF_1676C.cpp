#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<string>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    int ans = INT_MAX;
    for(int i =0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            int sum = 0;
            for(int x = 0;x<k;x++)
            {
                sum+= abs(a[i][x] - a[j][x]); 
            }
            ans = min(ans,sum);
        }
    }
    cout<<ans<<"\n";
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