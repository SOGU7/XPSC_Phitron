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
    string s;
    cin >> s;
    int n = s.size();
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (a.empty())
                continue;
            if (a.back() == 0)
            {
                cout << "NO\n";
                return;
            }
            for (int j = (int)a.size() - 1; j >= 0; j--)
            {
                if (a[j] == 2)
                {
                    a[j] = 1;
                }
                else
                    break;
            }
        }
        else if (s[i] == '0')
        {
            if (a.empty() || a.back() == 1)
            {
                cout << "NO\n";
                return;
            }
            a.back() = 0;
        }
        else if (s[i] == '+')
        {
            if (a.empty())
                a.push_back(1);
            else if (a.back() == 1 || a.back() == 2)
                a.push_back(2);
            else
                a.push_back(0);
        }
        else
        {
            a.pop_back();
        }
    }
    cout << "YES\n";
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