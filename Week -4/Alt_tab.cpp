#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<string>a(n);
    unordered_map<string,int>mp;
    for(int i = 0;i<n;i++) 
    {
        cin>>a[i];
        mp[a[i]] = i;
    }
    for(int i = n-1;i>=0;i--)
    {
        if(mp[a[i]]==i)
        {
            cout<<a[i][a[i].size()-2]<<a[i][a[i].size()-1];
        }
    }    

}

int main()
{
    fastread();
    solve();
     
    return 0;
}