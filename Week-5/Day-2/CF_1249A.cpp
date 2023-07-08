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
    bool flag = true;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])<=1)
            {
                flag = false;
                break;
            }
        }
        
    }
    cout<<2-flag<<"\n";
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