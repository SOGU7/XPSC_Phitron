#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i =0;i<n;i++) cin>>a[i];
   for(int i =0;i<n;i++)
   {
        if(a[i] == 0)
        {
            reverse(a.begin(),a.begin()+i);
        }
   }
   for(int i =0;i<n;i++)
   {
        cout<<a[i]<<" ";
   }
}

int main()
{
    fastread();
    solve();
     
    return 0;
}