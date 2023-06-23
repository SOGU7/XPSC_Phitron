#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i =0;i<n;i++)
    {
        if(s[i]<=90)
            s[i] = s[i]-'A'+'a';
    }
    auto it  = unique(s.begin(),s.end());
    s.erase(it,s.end());
    if(s == "meow") cout<<"YES\n";
    else cout<<"NO\n";
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