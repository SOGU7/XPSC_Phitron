#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n&1) cout<<-1<<"\n";
    else
    {
        vector<int>ans(n);
        ans[0] = 1;
        ans[1] = 2;
        for(int i = 2;i<n;i++)
        {
            ans[i] = i+1;
        }
        for(int i = 3;i<n;i+=2)
        {
            swap(ans[i],ans[i-1]);
        }
        for(int i = 0;i<n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
        
    }

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