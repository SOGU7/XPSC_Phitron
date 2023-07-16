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
    int fr[26] = {0};
    for(int i =0;i<n;i++)
    {
        fr[t[i]-'a']++;
    }
    int ch = 0;
    for(int i =0;i<26;i++)
    {
        if(fr[i]>0) ch++;
    }
    bool pal  = true;
    if(!(n&1))
    {
        bool p = true;
        for(int i =0;i<26;i++)
        {
            if(fr[i]&1)
            {
                p = false;
                break;
            }
        }
        if(p) pal = true;
        else pal = false;
    }
    else
    {
        int odd = 0;
        for(int i =0;i<26;i++)
        {
            if(fr[i]&1)
                odd++;
        }
        if(odd == 1) pal = true;
        else pal = false;
    }
    if(ch == 1)
    {
        if(n&1) cout<<2<<"\n";
        else cout<<1<<"\n";
    }
    else
    {
        if(pal) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
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