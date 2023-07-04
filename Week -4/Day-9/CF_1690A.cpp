#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int h1,h2,h3;
    for(h1 = 3;h1<n;h1++)
    {   
        h3 = (n-h1)/2;
        h2 = n-h1-h3;
        if(h3>1 && h2+1<h1)
        {
            h3--;
            h2++;
        }
        if(h1>h2 && h2>h3)
        {
            cout<<h2<<" "<<h1<<" "<<h3<<"\n";
            return;
        }
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