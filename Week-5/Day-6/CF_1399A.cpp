#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int temp = n;
    for(int i =0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(int i =0;i<n-1;i++)
    {
        if(abs(a[i+1]-a[i])<=1) temp--;
    }
    if(temp == 1) cout<<"YES\n";
    else cout<<"NO\n";
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