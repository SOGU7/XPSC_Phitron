#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string T;
    cin>>T;
    int i = 0,j=0;
    int count = 0;
    string ans;
    while(j<n)
    {
        ans.push_back(T[j]);
        if(j<2) j++;
        else
        {
            if(ans == "ABC")
            {
                count++;
            }
            ans.erase(0,1);
            i++;
            j++;
        }
    }
    cout<<count;
}

int main()
{
    fastread();
    solve();
     
    return 0;
}