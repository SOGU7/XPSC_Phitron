#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    if(n == 3) cout<<-1<<"\n";
    else 
    {
        for(int i =3;i<=n;i++) cout<<i<<" ";
        cout<<2<<" "<<1<<"\n";
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