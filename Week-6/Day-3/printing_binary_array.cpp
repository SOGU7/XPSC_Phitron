#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    int c[n];
  
    for(int i =0;i<n;i++)
    {
        if(a[i] == 0) c[i] = 1;
        else c[i] = 0;
    }
    for(int i =0;i<n;i++)
        cout<<c[i]<<" ";
    cout<<"\n";
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