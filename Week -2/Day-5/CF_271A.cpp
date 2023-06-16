#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    while(n!= 0)
    {
        n++;
        int a = n%10;
        int b = (n/10)%10;
        int c = (n/100)%10;
        int d = (n/1000)%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout<<n;
            break;
        }
    }

}

int main()
{
    fastread();
    solve();
     
    return 0;
}