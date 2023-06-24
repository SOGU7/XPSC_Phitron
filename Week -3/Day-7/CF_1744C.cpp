#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    char ch;
    cin>>n>>ch;
    string s;
    cin>>s;
    s+=s;
    int ans = 0,dis = INT_MIN;
    for(int i =2*n-2;i>=0;i--)
    {
        if(s[i] == 'g') dis = 0;
        if(s[i] == ch) ans = max(ans,dis);
        dis++;
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