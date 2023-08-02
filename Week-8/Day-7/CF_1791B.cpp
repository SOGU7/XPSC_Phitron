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
    string s;
    cin>>s;
    int x  = 0,y = 0;
    int i = 0;
    bool flag = true;
    while(i<n)
    {
        if(s[i] == 'U')
            x++;
        else if(s[i] == 'D')
            x--;
        else if(s[i] == 'R')
            y++;
        else
            y--;
        if(x == 1 && y == 1)
        {
            cout<<"YES\n";
            flag = false;
            break;
        }
        i++;
    }
    if(flag) cout<<"NO\n";
    
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