#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>>a(n);
    for(ll i = 0;i<n;i++)
    {
        ll k;
        cin>>k;
        a[i] = {k,i+1};
    }
    sort(a.begin(),a.end());
    for(int i = 0;i<n;i++)
    {
        int l = 0;
        int r = n-1;
        while(l!=r)
        {
            int target = x - a[i].first;
            if(l!=i && r!=i && (a[l].first+a[r].first) == target)
            {
                cout<<a[l].second<<" "<<a[r].second<<" "<<a[i].second<<"\n";
                return 0;
            }
            if((a[l].first+a[r].first) < target)
            {
                l++;
            }
            else r--;
        }
    }
    cout<<"IMPOSSIBLE\n";

    return 0;
}