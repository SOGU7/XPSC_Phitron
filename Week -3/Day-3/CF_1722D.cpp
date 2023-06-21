#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string t;
    cin>>t;
    vector<ll>cur;
    vector<pair<ll,int>>rev;
    ll cur_sum = 0;
    for(int i =0;i<n;i++)
    {
        if(t[i] == 'L')
        {
            cur.push_back(i);
            rev.push_back({n-i-1,i});
        }
        else
        {
            cur.push_back(n-i-1);
            rev.push_back({i,i});
        }
        cur_sum+=cur.back();
    }
    sort(rev.rbegin(),rev.rend());
    for(int i =0;i<n;i++)
    {
        int index = rev[i].second;
        if(cur[index]<rev[i].first)
        {
            cur_sum = cur_sum- cur[index] +rev[i].first;
        }
        cout<<cur_sum<<" ";
    }
    cout<<"\n";

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