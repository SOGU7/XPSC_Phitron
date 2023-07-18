#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string t;
    cin>>t;
    int ans = (t[0]-'0')*10 + (t[1]-'0');
    int ans2 = (t[3]-'0')*10 +(t[4]-'0');
    if(ans>12) cout<<"DD/MM/YYYY\n";
    else if(ans2>12) cout<<"MM/DD/YYYY\n";
    else cout<<"BOTH\n";
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