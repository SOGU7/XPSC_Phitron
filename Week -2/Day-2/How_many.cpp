#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int s,t;
    cin>>s>>t;
    int count = 0;
    for(int i = 0;i<=s;i++)
    {
        for(int j = 0;j<=s;j++)
        {
            for(int k = 0;k<=s;k++)
            {
                if((i+j+k)<=s && (i*j*k)<=t) count++;
                else break;
            }
        }
    }
    cout<<count;
}

int main()
{
    fastread();
    solve();
     
    return 0;
}