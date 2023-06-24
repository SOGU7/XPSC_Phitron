#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string s,t;
    cin>>s>>t;
    if(s.size()>t.size())
    {
        char ch = s[s.size()-1];
        char c = t[t.size()-1];
        if(ch == 'L')
            cout<<">\n";
        else if(ch == 'S')
            cout<<"<\n";
    }
    if(s.size() == t.size())
    {
        char ch = s[s.size()-1];
        char c = t[t.size()-1];
        int x,y;
        if(ch == 'L') x = 3;
        else if(ch == 'S') x = 1;
        else x = 2;
        if(c == 'L') y = 3;
        else if(c == 'S') y = 1;
        else y = 2;
        if(x>y) cout<<">\n";
        else if(x<y) cout<<"<\n";
        else cout<<"=\n";
    }
    else if(s.size()<t.size())
    {
        char ch = s[s.size()-1];
        char c = t[t.size()-1];
        if(c == 'L')
            cout<<"<\n";
        else if(c == 'S')
            cout<<">\n";
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