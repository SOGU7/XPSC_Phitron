#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i = 0,j = 0,count = 0;
    map<string,int>mp;
    string t = "";
    vector<string>ans;
    while(j<n)
    {
        t.push_back(s[j]);
        if(j<1)
            j++;
        else
        {
            ans.push_back(t);
            mp[t]++;
            t.pop_back();
            t.pop_back();
            t.push_back(s[j]);
            i++;
            j++;
        }
    }
    // for(int i = 0;i<ans.size();i++)
    //     cout<<ans[i]<<" ";
    // cout<<"\n";
    for(int i =0;i<ans.size();i++)
    {
        if(mp[ans[i]]>1)
        {
            count++;
            mp[ans[i]] = 0;
            continue;
        }
        count+=mp[ans[i]];
    }
    cout<<count<<"\n";
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