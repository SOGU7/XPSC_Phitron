#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int mini = INT_MAX;
    for(int i = 0;i<n-1;i++)
    {
        mini = min(mini,a[i+1]-a[i]);
    }
    cout<<mini<<"\n";
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