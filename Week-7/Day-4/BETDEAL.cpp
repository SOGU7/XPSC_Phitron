#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int ans1 = 100 - a;
    int ans2 = 200 - (2*b);
    if(ans1<ans2) cout<<"FIRST\n";
    else if(ans1 == ans2) cout<<"BOTH\n";
    else cout<<"SECOND\n";

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