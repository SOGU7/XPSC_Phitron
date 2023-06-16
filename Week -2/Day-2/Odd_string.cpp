#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string T;
    cin>>T;
    string ans;
    for(int i = 0;i<T.size();i++)
    {
        if(i%2 == 0) ans+=T[i];
    }
    cout<<ans;
}

int main()
{
    fastread();
    solve();
     
    return 0;
}