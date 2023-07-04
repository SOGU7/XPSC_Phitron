#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string t;
    cin>>t;
    set<char>s;
    int count = 0;
    for(int i =0;i<t.size();i++)
    {
        s.insert(t[i]);
        if(s.size()>3)
        {
            count++;
            s.clear();
            s.insert(t[i]);
        }
    }
    if(!s.empty()) count++;
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