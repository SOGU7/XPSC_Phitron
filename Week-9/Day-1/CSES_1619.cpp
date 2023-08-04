#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,long long>mp;
    for(int i = 1;i<=n;i++)
    {
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    long long sum = 0;
    bool flag = true;
    for(auto [x,val]:mp)
    {
        sum+=val;
        if(sum>2)
        {
            cout<<"NO\n";
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES\n";
   
    return 0;
}