#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
int dx[] = {-1,-1,1,1};
int dy[] = {-1,1,-1,1};
void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++) cin>>a[i][j];
    }
    ll ans = 0;
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            ll sum = a[i][j];
            for(int k =0;k<4;k++)
            {
                int new_x = i+dx[k];
                int new_y = j+dy[k];
                while(new_x>=0 && new_x<n && new_y>=0 && new_y<m)
                {
                    sum+=a[new_x][new_y];
                    new_x+=dx[k];
                    new_y+=dy[k];
                }
            }
            ans = max(ans,sum);
        }
    }
    cout<<ans<<"\n";
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