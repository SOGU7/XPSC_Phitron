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
    int count[31] = {0};
    for(int i = 0;i<=30;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if((a[j]&(1<<i)) != 0) count[i]++;
        }
    }
    // for(int i =0;i<=30;i++) cout<<count[i]<<" ";
    // cout<<"\n";
    int idx;
    for(int i = 30;i>=0;i--)
    {
        if(count[i]!=0)
        {
            idx = i+1;
            break;
        }
    }
    cout<<idx<<"\n";
    for(int i =1;i<=n;i++)
    {
        if(count[i-1]%i == 0) 
        {
            if(count[i-1] == 0 && i<=idx)
            {
                cout<<i<<" ";
                continue;
            }
            else
            {
                if(count[i-1]>0)
                    cout<<i<<" ";

            }
        }
    }
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