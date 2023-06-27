#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string t;
    cin>>t;
    int i = n-1;
    string ans;
    while(i>=0)
    {
        if(t[i]!='0')
        {
            ans+='a'+(t[i]-'0')-1;
            i--;
        }
        else
        {
            int a = stoi(t.substr(i-2,2));
            ans+='a'+a-1;
            i-=3;
        }
    }
    reverse(ans.begin(),ans.end());
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