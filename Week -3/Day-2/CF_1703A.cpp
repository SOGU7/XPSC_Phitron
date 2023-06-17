#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int count = 0;
    for(int i =0;i<3;i++)
    {
        char ch;
        cin>>ch;
        if(i == 0 && (ch == 'y' || ch == 'Y')) count++;
        if(i == 1 && (ch == 'e' || ch == 'E')) count++;
        if(i == 2 && (ch == 's' || ch == 'S')) count++;
    }
    if(count == 3) cout<<"YES\n";
    else cout<<"NO\n";
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