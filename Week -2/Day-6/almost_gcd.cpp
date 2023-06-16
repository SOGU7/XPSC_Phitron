#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    int fr[1001] ={0};
    for(int i = 0;i<n;i++)
    {
        int x = a[i];
        for(int j = 1;(j*j)<=x;j++)
        {
            if(x%j == 0)
            {
                if(j == (x/j))
                {
                    fr[j]++;
                    continue;
                }
                fr[j]++;
                fr[x/j]++;
            }
        }
    }
    int mx = 0;
    int mx_ind = -1;
    for(int i = 2;i<=1000;i++)
    {
        if(fr[i]>mx)
        {
            mx_ind = i;
            mx = fr[i];
        }
        
    }
    cout<<mx_ind;

}

int main()
{
    fastread();
    solve();
     
    return 0;
}