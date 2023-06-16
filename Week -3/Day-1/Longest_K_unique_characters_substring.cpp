#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string t;
    cin>>t;
    int  k;
    cin>>k;
    int n = t.size();
    int i =0,j=0,uniq =0;
    int fr[26] = {0};
    int ans = -1;
    while(j<n)
    {
        char c = t[j];
        if(fr[c-'a'] == 0) uniq++;
        fr[c-'a']++;
        if(uniq>k)
        {
            while(uniq>k)
            {
                char leftC = t[i];
                fr[leftC-'a']--;
                if(fr[leftC-'a'] == 0) uniq--;
                i++;
            }
        }
        if(uniq == k)
            ans = max(ans,j-i+1);
        j++;
    }
    cout<<ans;
}

int main()
{
    fastread();
    solve();
     
    return 0;
}