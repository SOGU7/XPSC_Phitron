#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    if(n%2 == 1) cout<<"YES\n";
    else
    {
        bool flag = true;
        ll temp = n;
        while(temp>2)
        {
            temp/=2;
            if(temp%2 == 1)
            {
                if(n%temp==0)
                {
                    cout<<"YES\n";
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout<<"NO\n";
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