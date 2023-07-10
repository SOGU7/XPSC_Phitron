#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
            cin>>a[i][j];
    }
    for(int i = 0;i<m;i++)
    {
        int last = n-1;
        for(int j =n-1;j>=0;j--)
        {
            if(a[j][i] == 'o') last = j-1;
            else if(a[j][i] == '*')
            {
                swap(a[j][i],a[last][i]);
                last--;
            }
        }
    }
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
            cout<<a[i][j];
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