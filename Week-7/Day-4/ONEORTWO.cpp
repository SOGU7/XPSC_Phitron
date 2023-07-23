#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int dif = abs(a-b);
    if(dif>=2)
    {
        if(a>b)
            cout<<"CHEF\n";
        else 
            cout<<"CHEFINA\n";
    }
    else
    {
        int mn = min(a,b);
        if(mn&1)
            cout<<"CHEF\n";
        else
            cout<<"CHEFINA\n";
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