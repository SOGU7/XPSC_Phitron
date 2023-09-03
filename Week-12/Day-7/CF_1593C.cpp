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
    int n,k;
    cin>>n>>k;
    vector<int>a(k);
    for(int i =0;i<k;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int sum = 0;
    int count = 0;
    for(int i = k-1;i>=0;i--)
    {
        sum+=(n-a[i]);
        if(sum<n)
            count++;
        else break;
    }
    cout<<count<<"\n";
    
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