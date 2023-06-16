#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string T,S;
    cin>>T>>S;
    ll count = 0;
    for(int i =0;i<T.size();i++)
    {
        if(T[i]!=S[i]) count++;
    }
    cout<<count;

}

int main()
{
    fastread();
    solve();
     
    return 0;
}