#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m],ans[n][m];
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            ans[i][j] = a[i][m-1-j];
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
    
}