#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    double n,m;
    cin>>n>>m;
    n = n-(0.1*n);
    if(n<m) cout<<"ONLINE\n";
    else if(n==m) cout<<"EITHER\n";
    else cout<<"DINING\n";


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