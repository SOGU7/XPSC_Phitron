#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    int ans1 = 5*x;
    int ans2 = (2*y)+x;
    int ans3 = (3*x)+y;
    int mini = min({ans1,ans2,ans3});
    cout<<mini<<"\n";

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