#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string ans = "3141592653589793238462643383279";
    string t;
    cin>>t;
    ll count = 0;
    for(int i = 0;i<t.size();i++)
    {
        if(ans[i] == t[i])
            count++;
        else break;
    }
    cout<<count<<"\n";
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