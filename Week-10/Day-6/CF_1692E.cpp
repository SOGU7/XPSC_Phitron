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
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    vector<int>b(n);
    int sum = 0;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
        sum+=a[i];
    }
    if(sum == s)
    {
        cout<<0<<"\n";
        return;
    }
    if(s>sum)
    {
        cout<<-1<<"\n";
        return;
    }
    reverse(b.begin(),b.end());
    int l = 0,r = n-1;
    int count = 0;
    while(l<=r)
    {
        if(sum == s)
        {
            break;
        }
        if(a[l] == 1)
        {
            l++;
            sum--;
            count++;
            continue;
        }
        if(a[r] == 1)
        {
            r--;
            sum--;
            count++;
            continue;
        }
        auto it1 = lower_bound(a.begin()+l,a.begin()+r,1);
        int pos1 = (it1 - a.begin()) - l;
        auto it2 = lower_bound(b.begin()+(n-r-1),b.begin()+(n-l-1),1);
        int pos2 = (it2-b.begin())-(n-r-1);
        if(pos1<=pos2)
        {
            l++;
            count++;
            continue;
        }
        else
        {
            r--;
            count++;
            continue;
        }
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