#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    map<ll, ll> mp;
    ll ans = 0;
    for (ll i = 0, j = 0; i < n; ++i)
    {
        j = max(mp[a[i]], j);
        ans = max(ans, i - j + 1);
        mp[a[i]] = i + 1;
    }
    cout << ans << "\n";
    return 0;
}