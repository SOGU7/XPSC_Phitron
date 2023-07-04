#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string t;
    cin>>t;
    int first_index = t[0]-'a';
    int last_index = t[t.size()-1]-'a';
    int fr[26] ={0};
    map<int,vector<int>>mp;
    for(int i =0;i<t.size();i++)
    {
        fr[t[i]-'a']++;
        mp[t[i]-'a'].push_back(i);

    }
    vector<int> s;
    int mn = min(first_index,last_index);
    int mx = max(first_index,last_index);
    int dis;
    if(t[0]>t[t.size()-1]) dis = -1;
    else dis = 1;

    for(int i = first_index;i!=last_index+dis;i+=dis)
    {
        if(fr[i]>0)
        {
            for(auto val : mp[i])
                s.push_back(val);
        }
    }
    int ans = 0;
    for(int i= 0;i<s.size()-1;i++)
    {
        ans+=abs(t[s[i+1]]-t[s[i]]);
    }
    int step = s.size();
    cout<<ans<<" "<<step<<"\n";
    for(auto val : s)
        cout<<val+1<<" ";
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