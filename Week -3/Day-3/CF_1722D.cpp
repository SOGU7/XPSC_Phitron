#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string t;
    cin>>t;
    ll sum1 = 0;
    ll sum2 = 0;
    int j;
    for(int i =0;i<n;i++)
    {
        if(i<=(n/2))
        {
            int temp = i;
            for(j =0;j<=i;j++)
            {
                sum1+=n-temp-1;
                temp++;
            }
            for(int k = j;k<n;k++)
            {
            char ch = t[i+1];
            if(ch == 'L')
            {
                sum1+=i-0;
            }
            else{
                sum1+=n-i-1;
            }
            }
        }
        else
        {
            int temp = i;
            for(j =0;j<=i;j++)
            {
                sum2+=temp-0;
                temp--;
            }
            for(int k = j;k<n;k++)
            {
                char ch = t[i+1];
                if(ch == 'L')
                {
                    sum2+=i-0;
                }
                else{
                    sum2+=n-i-1;
                }
            }
        }
        ll ans = max(sum1,sum2);
        cout<<ans<<" ";
    }
    cout<<"\n";
}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}