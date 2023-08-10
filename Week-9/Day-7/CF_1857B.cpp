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
    if(s[0]>'4')
    {
        cout<<1;
        for(int i = 0;i<n;i++)
            cout<<0;
        cout<<"\n";
        return;
    }
    bool flag = true;
    bool flag2 = true;
    for(int i = 0;i<n;i++)
    {
        if(s[i]>'4')
        {
            flag2 = false;
            int c;
            for(int j = i-1;j>=0;j--)
            {
                if(s[j]<='3')
                {
                    s[j]++;
                    c = j;
                    flag = false;
                    for(int k = c+1;k<n;k++)
                    s[k] = '0';
                    break;
                }
            }
            break;
        }
    }
    if((!flag && !flag2)|| flag2) 
        cout<<s<<"\n";
    else
    {
        cout<<1;
        for(int i = 1;i<=n;i++)
            cout<<0;
        cout<<"\n";
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