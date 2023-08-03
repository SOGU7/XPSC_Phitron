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
    int fr1[26] = {0},fr2[26] = {0};
    for(int i =0;i<n;i++)
    {
        fr1[s[i]-'a']++;
    }
    int ans = 0;
    for(int i =0;i<n;i++)
    {
        fr1[s[i]-'a']--;
        fr2[s[i]-'a']++;
        int cur = 0;
        for(int j =0;j<26;j++)
        {
            cur+=min(1,fr1[j])+min(1,fr2[j]);
        }
        ans = max(ans,cur);
    }
    cout<<ans<<"\n";
    
    
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