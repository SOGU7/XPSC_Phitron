#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i =0;i<n;i++) cin>>a[i];
    for(int i =0;i<n;i++) cin>>b[i];
    int dif = INT_MAX;
    for(int i =0;i<n;i++)
    {
        if(b[i]!=0) dif = min(dif,a[i]-b[i]);
    }
    bool flag = true;
    if(dif<0)
    {
        cout<<"NO\n";
    }
    else if(dif == INT_MAX)
    {
        cout<<"YES\n";
    }
    else 
    {
        for(int i =0;i<n;i++)
        {
            if(a[i]-b[i]>dif)
            {
                cout<<"NO\n";
                flag = false;
                break;
            }
            if(b[i]!=0 && a[i]-b[i]<dif)
            {
                cout<<"NO\n";
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES\n";
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