#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>ans;
    int x = INT_MIN, y =INT_MIN;
    for(int i = 0;i<n;i++)
    {
        if(i-1>=0)
        {
            x = abs(a[i]-a[i-1]);
        }
        if(i+1<n)
        {
            y = abs(a[i]-a[i+1]);
        }
        ans.push_back(max(x,y));
    }
    int mini = INT_MAX;
    for(int i =0;i<n;i++)
        mini = min(mini,ans[i]);
    cout<<mini<<"\n";
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