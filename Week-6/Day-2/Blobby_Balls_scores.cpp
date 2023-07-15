#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string t;
    cin>>t;
    int x = 1,y = -1;
    int sum1 = 0,sum2 = 0;
    for(int i = 0;i<n;i++)
    {
        if(t[i] == 'A')
        {
            if(x == 1)
            {
                sum1++;
            }
            else
                x = 1;
            y = -1;
        }
        else
        {
            if(y == 1)
            {
                sum2++;
            }
            else y = 1;
            x = -1;
        }
    }
    cout<<sum1<<" "<<sum2<<"\n";
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