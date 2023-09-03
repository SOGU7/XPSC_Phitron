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
    ll n;
    cin>>n;
    ll low = 1, high = 2e9;
    while(low+1<high)
    {
        ll mid = low+(high-low)/2;
        ll midCR = (mid*(mid-1))/2;
        if(midCR>n)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    ll lowCR = (low*(low-1))/2;
    ll val = n-lowCR;
    cout<<low+val<<"\n";
    
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