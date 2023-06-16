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
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        ll sum = 0;
        for(int i = x;i<=y;i++) sum+=a[i];
        cout<<sum<<"\n";
    }

}

int main()
{
    fastread();
    solve(); 
    return 0;
}