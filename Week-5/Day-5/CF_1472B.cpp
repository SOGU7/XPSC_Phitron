#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)  cin>>a[i];
    int x = 0;
    int y = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i] == 1) x++;
        else y++;
    }
    if(x%2==1) cout<<"NO\n";
    else if(y%2 == 1 && x%2 == 0 && x != 0) cout<<"YES\n";
    else if(y%2 == 1 && x == 0) cout<<"NO\n";
    else cout<<"YES\n";
  
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