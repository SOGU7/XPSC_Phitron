#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    bool ok = false;
    for(int i = 0;i<4;i++)
    {
        if(a<b && a<c && b<d && c<d)
        {
            ok = true;
            cout<<"YES\n";
            break;
        }
        else
        {
            int temp = a;
            a = c;
            c = d;
            d = b;
            b = temp;
        }
    }
    if(!ok) cout<<"NO\n";
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