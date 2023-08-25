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
    ll n,k;
    cin>>n>>k;
    vector<ll>div;
    for(ll i = 1;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            div.push_back(i);
            if((n/i)!=i)
            {
                div.push_back(n/i);
            }
        }
    }
    sort(div.begin(),div.end());
    if(div.size()<k)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<div[k-1];
    }

    
}

int main()
{
    fastread();
    int t = 1;
    //cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}