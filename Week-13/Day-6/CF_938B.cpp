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
    for(int i = 0;i<n;i++) cin>>a[i];
    int l = 1 , r = 1e6;
    int time_count = 0;
    for(int i = 0;i<n;i++)
    {
        int fr1 = a[i] - l;
        int fr2 = r-a[i];
        if(fr1<fr2)
        {
            time_count += fr1;
            l = a[i];
            r-=fr1;
        }
        else if(fr2<fr1 && fr2>=0)
        {
            time_count += fr2;
            r = a[i]; 
            l+=fr2;
        }
    }
    cout<<time_count<<"\n";
    
}

int main()
{
    fastread();
    int t = 1;
    //cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}