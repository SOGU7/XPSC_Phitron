#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string t,s;
    cin>>t>>s;
    bool flag = true;
    for(int i =0;i<n;i++)
    {
        if(t[i] != s[i])
        {
            if(t[i] == 'R' || s[i] == 'R')
            {
                cout<<"NO\n";
                flag = false;
                break;
            }
        }
    }
    if(flag) cout<<"YES\n";

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