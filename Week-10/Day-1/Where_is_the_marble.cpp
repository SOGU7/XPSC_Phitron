#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;

void solve(int n, int q)
{
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    while(q--)
    {
        int x;
        cin>>x;
        auto it = lower_bound(a.begin(),a.end(),x);
        int idx = it - a.begin();
        if(a[idx] == x)
            cout<<x<<" found at "<<idx+1<<"\n";
        else
            cout<<x<<" is not found\n";
    }
    
}

int main()
{
    fastread();
    int n,q;
    int cs = 1;
    while(cin>>n>>q)
    {
       if(n == 0 && q == 0) break;
       cout<<"Case# "<<cs<<":\n";
       solve(n,q);
       cs++;
    }
     
    return 0;
}