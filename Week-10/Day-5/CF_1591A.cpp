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
    for(int i =0;i<n;i++)
        cin>>a[i];
    int count = 1;
    bool flag = true;
    for(int i = 0;i<n;i++)
    {
        if(a[i] == 0)
        {
            if(i == 0) continue;
            if(a[i-1] == 0)
            {
                flag = false;
                cout<<-1<<"\n";
                break;
            }
        }
        if(a[i] == 1)
        {
            if(i == 0)
            {
                count++;
                continue;
            }
            if(a[i-1] == 1)
            {
                count+=5;
                continue;
            }
            count++;
        }
    }
    if(flag) cout<<count<<"\n";
    
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