#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    if(!(a&1))
    {
        int rem = b-a;
        rem++;
        int ans = rem/2;
        cout<<ans<<"\n";
    }
    else
    {
        int ans = 0;
        if(a == 9)
        {
            a+=3;
            ans++;
        }
        else
        {
            a+=a;
            ans++;
        }
        int rem = b-a;
        ans+= (rem+1)/2;
        cout<<ans<<"\n";
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