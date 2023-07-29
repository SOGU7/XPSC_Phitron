#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int fr[1002] = {0};
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        fr[a[i]]++;
    }  
    pbds<int>p;
    ll ans = 0;
    for(int i = 0;i<n;i++)
    {
         if(i == 0)
            p.insert(a[i]);
        else
        {
            ans+= p.size()-p.order_of_key(a[i]);
            p.insert(a[i]);
        }
        
    }
    cout<<ans<<"\n";
    
    
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