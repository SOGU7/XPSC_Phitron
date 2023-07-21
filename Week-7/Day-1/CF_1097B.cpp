#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    bool ok = true;
    for(int i = 0;i<(1<<n);i++)
    {
        int ans = 0;
        for(int j =0;j<n;j++)
        {
            if((i&(1<<j))!=0) ans+=a[j];
            else ans-=a[j]; 
        }
        if(ans%360 == 0)
        {
            cout<<"YES";
            ok = false;
            break;
        }
    }
    if(ok) cout<<"NO";

    return 0;
}