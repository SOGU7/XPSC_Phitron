#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    for(int i =9;i>=1;i--)
    {
        if(n>=i)
        {
            s.push_back(char(i+'0'));
            n-=i;
        }
    }
    reverse(s.begin(),s.end());
    cout<<s<<"\n";
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
