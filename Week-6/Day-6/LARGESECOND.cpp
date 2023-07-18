#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    int x = *s.rbegin();
    s.erase(s.find(x));
    int y = *s.rbegin();
    cout<<x+y<<"\n";

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