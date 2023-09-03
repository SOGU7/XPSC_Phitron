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
    stack<char>st;
    int n = s.size();
    for(int i = 0;i<n;i++)
    {
        if(s[i] == 'A') st.push(s[i]);
        else
        {
            if(st.empty()) st.push(s[i]);
            else st.pop();
        }
    }
    cout<<st.size()<<"\n";
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