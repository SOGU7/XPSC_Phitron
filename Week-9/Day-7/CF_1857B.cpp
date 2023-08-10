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
    string s;
    cin>>s;
    int n = s.size();
    int rem = 0;
    string ans;
    for(int i = n-1;i>=0;i--)
    {
        int x = s[i]-'0';
        if(x == 9)
        {
            continue;
        }
        x+=rem;
        if(x<5)
        {
            ans+= to_string(x);
            rem = 0;
        }
        else
        {
            ans+='0';
            rem = 1;
        }
    }
    if(rem) ans+= to_string(rem);
    reverse(ans.begin(),ans.end());
    for(int i = 0;i<n;i++)
    {
        if(ans[i] == '9')
        {
            int x = ans[i-1]-'0';
            x++;
            ans[i-1] = to_string(x);
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