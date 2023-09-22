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
    int k,n,m;
    cin>>k>>n>>m;
    vector<int>a(n+m);
    for(int i = 0;i<n+m;i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<int>ans;
    for(int i = 0;i<n+m;i++)
    {
        if(a[i] == 0)
        {
            k++;
            ans.push_back(0);
        }
        else
        {
            if(a[i] > k)
            {
                cout<<-1<<"\n";
                return;
            }
            else
                ans.push_back(a[i]);
        }
    }  
    for(auto val : ans)
        cout<<val<<" ";
    cout<<"\n";
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