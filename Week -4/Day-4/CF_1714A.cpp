#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,h,m;
    cin>>n>>h>>m;
    int temp1 = h;
    int temp2 = m;
    multiset<pair<int,int>>mp;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        int ansh;
        int ansm;
        if(m>y)
        {
            x--;
            y+=60;
            ansm = y-m;
        }
        else
        {
            ansm = y-m;
        }
        if(x<h)
        {
            ansh=(24-h)+x;
        }
        else
        {
            ansh = x-h;
        }

        mp.insert({ansh,ansm});
    }
    pair<int,int>p = *mp.begin();
    cout<<p.first<<" "<<p.second<<"\n";
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