#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    for(int x = 0;x<(1<<8);x++)
    {
        vector<int>b = a;
        for(int i = 0;i<n;i++)
            b[i] = b[i]^x;
        int ans = 0;
        for(int i = 0;i<n;i++)
            ans = b[i]^ans;
        if(ans == 0)
        {
            cout<<x<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
    
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