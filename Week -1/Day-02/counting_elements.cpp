#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int fr[1001] = {0};
    for(int i = 0;i<n;i++)
    {
        fr[a[i]]++;
    }
    int ans = 0;
    for(int i = 1;i<=1000;i++)
    {
        if(fr[i]!=0)
        {
            if(fr[i-1]!=0)
            {
                ans+=fr[i-1];
            }
        }
    }
    cout<<ans;
    return 0;
}