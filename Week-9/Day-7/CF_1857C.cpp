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
    int m = (n*(n-1))/2;
    vector<int>b(m);
    for(int i =0;i<m;i++) cin>>b[i];
    sort(b.begin(),b.end());
    for(int i = 0;i<m;i+=n)
    {
        cout<<b[i]<<" ";
        n--;
    }
    cout<<1000000000<<"\n";
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