#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;

int main()
{
    fastread();
    int t;
    cin>>t;
    int cs = 1;
    while(t--)
    {
        ll dp[10009];
        for(int i = 0;i<6;i++)
            cin>>dp[i];
        ll n;
        cin>>n;
        for(int i = 6;i<=n;i++)
        {
            dp[i] = (dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%10000007;
        }
        cout<<"Case "<<cs<<": "<<(dp[n]%10000007)<<"\n";
       cs++;
    }
     
    return 0;
}