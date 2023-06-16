#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string T;
    cin >> T;
    string ans;
    ans.push_back(T[0]);
    char ch = T[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (T[i] == ch)
        {
            ch = T[i + 1];
            ans.push_back(ch);
            i++;
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