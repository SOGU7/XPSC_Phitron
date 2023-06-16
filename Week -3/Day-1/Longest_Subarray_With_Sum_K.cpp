#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    ll sum = 0,ans=0;
    ll i =0,j=0;
    while(j<n)
    {
        sum+=a[j];
        if(sum>k)
        {
            while(sum>k)
            {
                sum-=a[i];
                i++;
            }
        }
        if(sum == k)
        {
            ans = max(ans,j-i+1);
        }
        j++;
    }
    cout<<ans;
}

int main()
{
    fastread();
    solve();
     
    return 0;
}