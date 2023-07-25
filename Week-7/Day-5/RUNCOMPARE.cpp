#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int count = 0;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    vector<int>b(n);
    for(int i =0;i<n;i++) cin>>b[i];
    for(int i =0;i<n;i++)
    {
        int mn = min(a[i],b[i]);
        int dif = abs(a[i]-b[i]);
        if(dif<=mn) count++;
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