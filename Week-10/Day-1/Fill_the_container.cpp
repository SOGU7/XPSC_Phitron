#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;

void solve(int n,int m)
{
    vector<int>a(n);
    int mx = -1;
    for(int i = 0;i<n;i++) 
    {
        cin>>a[i];
        mx = max(mx,a[i]);
    }
    int l = mx,r = INT_MAX;
    int ans;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        int cnt = 1;
        int sum = 0;
        for(int i =0;i<n;i++)
        {
            if(sum+a[i]<=mid)
            {
                sum+= a[i];
            }
            else
            {
                cnt++;
                sum = a[i];
            }
        }
        if(cnt<=m)
        {
            ans = mid;
            r = mid-1; 
        }
        else
        {
            l = mid+1;
        }

    }
    cout<<ans<<"\n";
    
}

int main()
{
    fastread();
    int n,m;
    while(cin>>n>>m)
    {
       solve(n,m);
    }
     
    return 0;
}