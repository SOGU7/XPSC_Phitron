#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>index[51];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        index[a[i]].push_back(i);
    }
    string t;
    cin>>t;
    bool flag = true;
    for(int i =0;i<n;i++)
    {
        char ch = t[i];
        for(int j =0;j<index[a[i]].size();j++)
        {
            int z = index[a[i]][j];
            if(t[z] != ch)
            {
                cout<<"NO\n";
                flag = false;
                break;
            }
        }
        if(!flag) break;
    }
    if(flag) cout<<"YES\n";
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