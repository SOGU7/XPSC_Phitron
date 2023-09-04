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
    int a[2][n];
    a[0][0] = 2*n-1;
    a[1][n-1] = 2*n;
    for(int i = 1;i<n;i++)
    {
        if(i%2 == 0)
        {
            a[0][i] = n+i;
            a[1][i-1] = n+i-1;
        }
        else
        {
            a[0][i] = i+1;
            a[1][i-1] = i;
        }
    }
    for(int i = 0;i<2;i++)
    {
        for(int j = 0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<"\n";
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