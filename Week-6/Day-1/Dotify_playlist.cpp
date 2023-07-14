#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k,l;
    cin>>n>>k>>l;
    pair<int,int>p[n];
    vector<int>ans;
    for(int i =0;i<n;i++)
        cin>>p[i].first>>p[i].second;
    for(int i =0;i<n;i++)
    {
        if(p[i].second == l)ans.push_back(p[i].first);
    }
    sort(ans.begin(),ans.end());
    int z = ans.size();
    if(z<k)
    {
        cout<<-1<<"\n";
        return;
    }
    int sum = 0;
    int i = z-1;
    while(k--)
    {
        sum+=ans[i];
        i--;
    }
    cout<<sum<<"\n";
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