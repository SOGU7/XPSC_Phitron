#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    vector<string>a(8);
    for(int i =0;i<8;i++)
    {
        cin>>a[i];
    }
    bool flag = true;
    for(int i =1;i<7;i++)
    {
        for(int j =1;j<7;j++)
        {
            if( a[i][j] =='#' && a[i-1][j+1] == '#' && a[i+1][j+1] == '#')
            {
                cout<<i+1<<" "<<j+1<<"\n";
                flag = false;
                break;
            }
        }
        if(flag ==false) break;
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
