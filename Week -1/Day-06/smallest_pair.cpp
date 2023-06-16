#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        pair<int,int>p[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            p[i] = {a[i],i+1};
        }
        sort(p,p+n);
        int sum = p[0].first+p[1].first+abs(p[0].second-p[1].second);
        cout<<sum<<"\n";
    }
    return 0;
}