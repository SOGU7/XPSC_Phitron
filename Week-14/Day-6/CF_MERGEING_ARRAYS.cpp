#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<m;i++) cin>>b[i];
    vector<int>ans;
    int l = 0,r = 0;
    while(l<n && r<m)
    {
        if(a[l]<=b[r])
        {
            ans.push_back(a[l]);
            l++;
        }
        else
        {
            ans.push_back(b[r]);
            r++;
        }
    }
    if(r<m)
    {
        while(r<m)
        {
            ans.push_back(b[r]);
            r++;
        }
    }
    if(l<n)
    {
        while(l<n)
        {
            ans.push_back(a[l]);
            l++;
        }
    }
    for(auto val : ans)
        cout<<val<<" ";

    return 0;
}