#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    vector<ll>pre_sum1(n);
    pre_sum1[0] = a[0];
    for(int i =1;i<n;i++) pre_sum1[i] = pre_sum1[i-1] + a[i];
    sort(b.begin(),b.end());
    vector<ll>pre_sum2(n);
    pre_sum2[0] = b[0];
    for(int i =1;i<n;i++) pre_sum2[i] = pre_sum2[i-1] + b[i];
    int q;
    cin>>q;
    while(q--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x == 1)
        {
            ll ans;
            if(y == 1) ans = pre_sum1[z-1];
            else ans = pre_sum1[z-1]-pre_sum1[y-2];
            cout<<ans<<"\n"; 
        }
        else
        {
            ll ans;
            if(y == 1) ans = pre_sum2[z-1];
            else ans = pre_sum2[z-1]-pre_sum2[y-2];
            cout<<ans<<"\n"; 
        }
    }

}

int main()
{
    fastread();
    solve();
     
    return 0;
}