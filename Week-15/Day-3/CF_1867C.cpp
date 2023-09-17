#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
int query(int x)
{
    cout<<x<<endl;
    int y;
    cin>>y;
    assert(y!=-2);
    return y;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]] = 1;
    }
    int mex = -1;
    for(int i = 0;;i++)
    {
        if(!mp.count(i))
        {
            mex = i;
            break;
        } 
    }
    int last =  mex;
    while(true)
    {
        int y = query(last);
        if(y == -1)
        {
            break;
        }
        last = y;

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