#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int>a;
    for(int i =0;i<n;i++)
    {
        int b;
        cin>>b;
        if(b == x) continue;
        else a.push_back(b);
    }
    for(auto val:a)
        cout<<val<<" ";
}

int main()
{
    fastread();
    solve();
     
    return 0;
}