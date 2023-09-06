#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    for(int i = 0;i<n;i++)
        cin>>a[i];
    bool flag_row = true;
    for(int i = 0;i<n;i++)
    {
        int u = 0;
        for(int j = 0;j<m;j++)
        {
            if(a[i][j] == 'U' || a[i][j] == 'D') u++;
        }
        if(u%2) 
        {
            flag_row = false;
            break;
        }
    } 
    if(!flag_row)
    {
        cout<<-1<<"\n";
        return;
    }
    bool flag_col = true;
    for(int i = 0;i<m;i++)
    {
        int u = 0;
        for(int j = 0;j<n;j++)
        {
            if(a[j][i] == 'L' || a[j][i] == 'R') u++;
        }
        if(u%2) 
        {
            flag_col = false;
            break;
        }
    } 
    if(!flag_col)
    {
        cout<<-1<<"\n";
        return;
    }
   // cout<<"Yes\n";
    vector<string>ans = a;
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    for(int i = 0;i<n;i++)
    {
        int inv = 0;
        for(int j = 0;j<m;j++)
        {
            if(visited[i][j] == true) continue;
            if(a[i][j] == 'U')
            {
                visited[i][j] = true;
                visited[i+1][j] = true;
                if(inv == 0)
                {
                    ans[i][j] = 'B';
                    ans[i+1][j] = 'W';
                }
                else
                {
                    ans[i][j] = 'W';
                    ans[i+1][j] = 'B';
                }
                inv^=1;
            }
        }
    }
    for(int j = 0;j<m;j++)
    {
        int inv = 0;
        for(int i = 0;i<n;i++)
        {
            if(visited[i][j] == true) continue;
            if(a[i][j] == 'L')
            {
                visited[i][j] = true;
                visited[i][j+1] = true;
                if(inv == 0)
                {
                    ans[i][j] = 'B';
                    ans[i][j+1] = 'W';
                }
                else
                {
                    ans[i][j] = 'W';
                    ans[i][j+1] = 'B';
                }
                inv^=1;
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            cout<<ans[i][j];
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

