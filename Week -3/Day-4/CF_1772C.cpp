#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;

void solve()
{
    int k, n;
    cin >> k >> n;
    vector<int> a(k - 1, 1);
    int x = k;
    for (int i = 1; i < k - 1; i++)
    {
        if (x + i <= n)
        {
            a[i] += i;
            x += i;
        }
    }
    vector<int> ans(k);
    ans[0] = 1;
    for (int i= 0; i< k - 1; i++)
    {
        ans[i + 1] = ans[i] + a[i];
    }
    for (int i = 0; i < k; i++)
    {
        cout << ans[i];
        if (i < k - 1)
        {
            cout << ' ';
        }
    }
    cout <<"\n";
}


int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}