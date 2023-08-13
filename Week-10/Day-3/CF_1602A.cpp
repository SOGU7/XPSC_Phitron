#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    char mn = 'z';
    int idx;
    for(int i =0;i<s.size();i++)
    {
        if(mn>=s[i])
        {
            idx = i;
            mn = s[i];
        }
    }
    cout<<mn<<" ";
    for(int i =0;i<s.size();i++)
    {
        if(i == idx) continue;
        cout<<s[i];
    }
    cout<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}

