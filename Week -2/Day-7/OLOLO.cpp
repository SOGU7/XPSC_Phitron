#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    map<int,int>mp;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i =0;i<n;i++)
    {
        if(mp[a[i]] == 1)
        {
            cout<<a[i];
            break;
        }
    }

}

int main()
{
    fastread();
    solve();
     
    return 0;
}