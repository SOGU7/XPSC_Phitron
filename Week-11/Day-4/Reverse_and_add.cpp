#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
ll rev(ll n)
{
    ll sum = 0;
    while(n!=0)
    {
        int temp = n%10;
        sum = (sum*10)+temp;
        n/=10;
    }
    return sum;
}
void solve()
{
    ll n;
    cin>>n;
    ll p = rev(n);
    int count = 0;
    while(true)
    {
        if(p == n)
        {
            cout<<count<<" "<<n<<"\n";
            return;
        }
        ll sum = n+p;
        n = sum;
        p = rev(sum);
        count++;
        
    }
    
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