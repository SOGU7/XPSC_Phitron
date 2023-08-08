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
    if(n == 1 || n == 2 || n == 4)
    {
        cout<<"-1\n";
        return;
    }
    if(n%3 == 0)
    {
        cout<<n/3<<" "<<0<<" "<<0<<"\n";
    }
    else if(n%3 == 1)
    {
        cout<<(n-7)/3<<" "<<0<<" "<<1<<"\n";
    } 
    else
    {
        cout<<(n-5)/3<<" "<<1<<" "<<0<<"\n";
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