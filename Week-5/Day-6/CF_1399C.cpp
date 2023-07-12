#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i =1;i<=n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int mx = INT_MIN;
    for(int i =2;i<=(2*n);i++)
    {
        int count = 0;
        for(auto j : mp)
        {
            int other = i-j.first;
            if(other>=1 && mp.count(other))
            {
                count+=min(j.second,mp[other]);
            }
        }
        count/=2;
        mx = max(mx,count);
    }
    cout<<mx<<"\n";
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