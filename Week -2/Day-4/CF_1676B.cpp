#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int min = a[0];
    ll count = 0;
    for(int i = 1;i<n;i++)
    {
        if(a[i] == min) continue;
        else{
            count+= a[i] - min;
        }
    }
    cout<<count<<"\n";
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