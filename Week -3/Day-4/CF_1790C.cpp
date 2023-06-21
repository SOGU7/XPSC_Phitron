#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin >> n;
    pair<int,int>a[1005];
    for (int i = 1; i <= n; i++)
        a[i] = {0, i};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int x;
            cin >> x;
            a[x].first += j;
        }
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        cout << a[i].second << " ";
    cout << "\n";
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