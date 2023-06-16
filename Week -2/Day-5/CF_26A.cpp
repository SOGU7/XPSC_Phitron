#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;

bool check_prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    int count = 0;
    int p_count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                int div1 = j;
                int div2 = i / j;
                bool ans1 = check_prime(div1);
                bool ans2 = check_prime(div2);
                if (ans1 && div1!= div2)
                    count++;
                if (ans2 && div1 !=div2)
                    count++;
            }
        }
        if(count == 2)
        {
            p_count++;         
        } 
        count = 0;
    }
    cout<<p_count;
}

int main()
{
    fastread();
    solve();

    return 0;
}