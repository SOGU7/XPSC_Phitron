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
    ll n;
    cin>>n;
    vector<ll>a(n-1);
    for(ll i = 0;i<n-1;i++) cin>>a[i];
    ll sum = (n*(n+1))/2;
    if(a[n-2]>sum)
    {
        cout<<"NO\n";
        return;
    } 
    else
    {
        set<ll>s;
        for(ll i = 1;i<=n;i++)
            s.insert(i);
        ll dif = -1;
        for(ll i = 1;i<n-1;i++)
        {
            ll dif1 = a[i]-a[i-1];
            if(s.find(dif1) == s.end())
                dif = dif1;
            else
                s.erase(dif1);
        }
        if(sum == a[n-2])
        {
            if(s.size() == 2)
            {
                ll sum1 = 0;
                for(auto x : s)
                    sum1+=x;
                if(sum1 == a[0])
                    cout<<"YES\n";
                else cout<<"NO\n";
            }
            else
            {
                if(s.size()>3) cout<<"NO\n";
                else if(s.size() == 3)
                {
                    ll sum1 = 0;
                    if(s.find(a[0]) == s.end())
                        cout<<"NO\n";
                    else
                    {
                        s.erase(a[0]);
                        ll sum1 = 0;
                        for(auto x : s)
                            sum1+=x;
                        if(sum1 == dif) cout<<"YES\n";
                        else cout<<"NO\n";
                    }
                }
            }
        }
        else
        {
            if(s.find(a[0]) == s.end())
                cout<<"NO\n";
            else
            {
                if(s.size()>2)
                    cout<<"NO\n";
                else cout<<"YES\n";
            }
        }
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