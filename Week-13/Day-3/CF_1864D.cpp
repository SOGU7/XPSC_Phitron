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
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans = 0;
    int left[n][n],right[n][n],cur[n][n];
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            left[i][j] = 0;
            right[i][j] = 0;
            cur[i][j] = 0;
        }
    }
    for(int i = 0;i<n;i++)
    {
        //prefim sum calculating
        for(int j = 0;j<n;j++)
        {
            // if(j-1>=0)
            // {
            //     cur[i][j] = cur[i][j-1]+left[i][j] + right[i][j];
            // }
            // else
            //     cur[i][j] = left[i][j] + right[i][j];
            cur[i][j] = left[i][j]+right[i][j]+(j-1>=0?cur[i][j-1]:0);
        }
        // checking flip
        for(int j =0;j<n;j++)
        {
            char now = a[i][j];
            if(cur[i][j]%2 == 1)
            {
                now = ((now-'0')^1)+'0';
            }
            if(now == '1')
            {
                ans++;
                left[i][j]++;
                if(j+1<n)
                    right[i][j+1]--;
            }

        }
        //prefix sum propagrating
        for(int j = 0;j<n;j++)
        {
            if(i+1>=n)
                break;
            if(j-1>=0)
            {
                left[i+1][j-1]+=left[i][j];
            }
            else
            {
                left[i+1][j]+=left[i][j];
            }
            if(j+1<n)
            {
                right[i+1][j+1]+=right[i][j];
            }
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