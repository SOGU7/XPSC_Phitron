#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int i = 0,j =1,count = 0;
    vector<int>a(n);
    int fr[n+1] = {0};
    int mx = -1;
    for(int i =0;i<n;i++) 
    {
        cin>>a[i];
        fr[a[i]]++;
        mx = max(mx,fr[a[i]]);
    }
    cout<<n-mx<<"\n";



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