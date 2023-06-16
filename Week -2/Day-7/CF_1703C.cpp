#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        for(int j =0;j<x;j++)
        {
            if(s[j] == 'D')
            {
                a[i]++;
                if(a[i] == 10) a[i] = 0;
            }
            else
            {
                a[i]--;
                if(a[i] == -1) a[i] = 9;
            }
        }
    }
    for(int i =0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n";
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