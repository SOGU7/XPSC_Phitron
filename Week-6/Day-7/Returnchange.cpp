#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int x = n%10;
    if(x<5)
    {
        cout<<100-n+x<<"\n";
    }
    else
    {
        cout<<100-(n+(10-x))<<"\n";
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