#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int count0 = 0;
    int count1 = 0;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x == 0) count0++;
        if (x == 1) count1++;
    }
    long long ans = ((long long) 1<<count0)*count1;
    cout<<ans<<"\n";

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}

