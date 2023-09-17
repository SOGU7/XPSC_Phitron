#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    int mis_match = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            mis_match++;
        i++;
        j--;
    }
    for (int i = 0; i <= n; i++)
    {
        if (i < mis_match || i > (n - mis_match))
            ans += '0';
        else
        {
            if (n % 2 == 0)
            {
                if ((i - mis_match) % 2 == 0)
                    ans += '1';
                else
                    ans += '0';
            }
            else
                ans += '1';
        }
    }
    cout << ans << "\n";
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