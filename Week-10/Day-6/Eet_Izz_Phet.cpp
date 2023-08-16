#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
int hashing(string s,int base)
{
    int sum = s[0]-'a';
    int val = 1;
    for(int i = 1;i<s.size();i++)
    {
        sum+=((((base%mod)*(val%mod))%mod)*(s[i]-'a'))%mod;
        val = ((val%mod)*(base%mod))%mod;
    }
    return sum;
}
void solve()
{
    int n;
    cin>>n;
    map<pair<int,int>,bool>mp;
    for(int i = 0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[{hashing(s,2),hashing(s,3)}] = true;
    }
    int q;
    cin>>q;
    for(int i =0;i<q;i++)
    {
        string x;
        cin>>x;
        if(mp[{hashing(x,2),hashing(x,3)}] == true) cout<<"yes\n";
        else cout<<"no\n";
    }
    
    
}

int main()
{
    fastread();
    solve();
     
    return 0;
}