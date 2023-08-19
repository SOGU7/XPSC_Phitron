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
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        auto it1 = upper_bound(a.begin(),a.end(),x);
        auto it = lower_bound(a.begin(),a.end(),x);
        int idx = it-a.begin();
        int idx1 = it1-a.begin();
        if(idx == 0)
        {
            cout<<"X ";
        }
        else
        {
            cout<<a[idx-1]<<" ";
        }
        if(idx1 == n)
        {
            cout<<"X\n";
        }
        else
        {
            cout<<a[idx1]<<"\n";
        }
        
    }
    
}

int main()
{
    fastread();
    int t = 1;
    while(t--)
    {
       solve();
    }
     
    return 0;
}