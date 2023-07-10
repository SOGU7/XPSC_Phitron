#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int n1 = n-k+1;
    if(n1>0 && n1%2!=0)
    {
        cout<<"YES\n";
        for(int i =0;i<k-1;i++) cout<<1<<" ";
        cout<<n1<<"\n";
        return;
    }
    int n2 = n-2*(k-1);
    if(n2>0 && n2%2==0)
    {
        cout<<"YES\n";
        for(int i =0;i<k-1;i++) cout<<2<<" ";
        cout<<n2<<"\n";
        return;
    }
    cout<<"NO\n";
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