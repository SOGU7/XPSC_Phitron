#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    string t;
    cin>>t;
    int fr1[26] = {0};
    int fr2[26] = {0};
    for(int i =0;i<n;i++)
    {
        if(t[i]<=90 && t[i]>=65)
            fr1[t[i]-'A']++;
        else
            fr2[t[i]-'a']++;
    }
    int ans = 0;
    for(int i =0;i<26;i++)
    {
        int mini = min(fr1[i],fr2[i]);
        ans+=mini;
        fr1[i]-=mini;
        fr2[i]-=mini;
        int ans1 = min(k,max(fr1[i],fr2[i])/2);
        k -= ans1;
        ans+=ans1;
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