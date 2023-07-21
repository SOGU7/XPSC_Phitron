#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    vector<bool>visited(n,false);
    ll total = 0;
    for(int i = 31;i>=0;i--)
    {
        ll num = 0;
        for(int j =0;j<n;j++)
        {
            if((a[j]&(1<<i)) && !visited[j])
            {
                num++;
                visited[j] = true;
            }
        }
        total+=((num*(num-1))/2);
    }
    cout<<total<<"\n";

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