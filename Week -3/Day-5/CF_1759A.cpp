#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string t;
    for(int i =0;i<18;i++)
    {
        t+="Yes";
    }
    string s;
    cin>>s;
    if(t.find(s)== string::npos) cout<<"NO\n";
    else cout<<"YES\n";
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