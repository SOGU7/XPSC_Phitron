#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i =0;i<n;i++)
        for(int j=0;j<m;j++) cin>>a[i][j];
    int x;
    cin>>x;
    bool flag = true;
    for(int i =0;i<n;i++)
    {
        bool flag1 = true;
        for(int j =0;j<m;j++)
        {
            if(a[i][j] == x)
            {
                cout<<"will not take number";
                flag = false;
                flag1 = false;
                break;
            }
        }
        if(!flag1) break;
    }
    if(flag) cout<<"will take number";
    return 0;
}