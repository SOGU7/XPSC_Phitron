#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;

vector<int>a(2e5+1);
bool ans = true;
void kal_check(int x,int sz)
{
    vector<int>b;
    for(int i = 1;i<=sz;i++)
    {
        if(a[i]!=x)
            b.push_back(a[i]);
    }
    int n = b.size();
    // for(int i = 0;i<n;i++)
    //     cout<<b[i]<<" ";
    //cout<<"\n";
    for(int i = 0;i<n;i++)
    {
        if(b[i]!=b[n-i-1])
        {
            return;
        }
    }
    ans = true;
}

void solve()
{
    int n;
    cin>>n;
   // map<int,int>mp;
   ans = true;
    for(int i = 1;i<=n;i++)
    {
        cin>>a[i];
      //  mp[a[i]]++;
    }
    if(n<=2)
    {
        cout<<"YES\n";
        return;
    }
    for(int i = 1;i<=n;i++)
    {
        if(a[i]!=a[n+1-i])
        {
            ans = false;
            kal_check(a[i],n);
            kal_check(a[n+1-i],n);
            break;
        }
    }
    if(ans)
        cout<<"YES\n";
    else cout<<"NO\n";
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