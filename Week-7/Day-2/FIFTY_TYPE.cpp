#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int count = 0;
    while(n!=50)
    {
        if(n>50)
        {
            n-=3;
            count++;
        }
        else
        {
            n+=2;
            count++;
        }
    }
    cout<<count<<"\n";

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