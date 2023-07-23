#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,x;
    cin>>n>>x;
    int mx = n+1;
    int mn = -(n-1);
    if(x>mx || x<mn)
        cout<<-1<<"\n";
    else
    {
        if(x<1)
        {
            int dis = x-mn;
            for(int i = 0;i<dis;i++)
            {
                cout<<'*';
            }
            for(int i = dis;i<n;i++)
                cout<<"-";
            cout<<"\n";
        }
        else
        {
            int dis = mx - x;
            for(int i =0;i<dis;i++)
                cout<<'*';
            for(int i = dis;i<n;i++)
                cout<<'+';
            cout<<"\n";
        }
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