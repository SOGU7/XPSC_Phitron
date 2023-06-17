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
        int a;
        cin>>a;
        s.insert(a);        
    }
    int ans = s.size();
    if(n%2 == ans%2) cout<<ans<<"\n";
    else cout<<ans-1<<"\n";    
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