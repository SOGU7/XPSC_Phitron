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
    int e_pre = 0, o_pre = 0,e_suf=0,o_suf=0;
    int count = 0;
    for(int i =0;i<n;i++)
    {
        if(i%2 == 0) o_suf+=a[i];
        else e_suf+=a[i];
    }
    for(int i =0;i<n;i++)
    {
        if(i%2==0)
        {
            o_suf-=a[i];
        }
        else e_suf-=a[i];
        if(o_suf+e_pre == e_suf+o_pre) count++;
        if(i%2 == 0) o_pre+=a[i];
        else e_pre+=a[i];
    }
    cout<<count<<"\n";
}

int main()
{
    fastread();
    solve();
     
    return 0;
}