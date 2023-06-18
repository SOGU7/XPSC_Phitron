#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<string>a(n);
    set<string>st;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    } 
    string ans = "";
    for(int i =0;i<n;i++)
    {
        int x = a[i].size();
        bool ok = 0;
        for(int j =0;j<x-1;j++)
        {
            if(st.count(a[i].substr(0,j+1)) && st.count(a[i].substr(j+1)))
            {
                ok = 1;
                break;                
            }
        }
        ans+=ok+'0';
    }
    cout<<ans<<"\n";
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