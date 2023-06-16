#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    ll sum = 0;
    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=n;j++)
        {
            for(int k =1;k<=n;k++)
            {
                sum+=__gcd(__gcd(j,k),i);
            }
        }
    }
    cout<<sum;

}

int main()
{
    fastread();
    solve();
     
    return 0;
}