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
    ll k;
    cin>>n>>k;
    queue<int>q;
    int mx = -1;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
        mx = max(mx,x);
    }
    if(k>=n-1)
    {
        cout<<mx<<"\n";
        return;
    }
    int count = 0;
    int src = q.front();
    q.pop();
    while(count<k)
    {
        int z = q.front();
        q.pop();
        if(z>src)
        {
            q.push(src);
            src = z;
            count = 1;
        }
        else
        {
            q.push(z);
            count++;
        }
        
    }
    cout<<src<<"\n";
    
}

int main()
{
    fastread();
    solve();
    return 0;
}