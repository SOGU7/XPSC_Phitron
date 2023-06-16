#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];     
    int i = 0,j = 0;
    multiset<int,greater<int>>m;
    vector<int>ans;
    while(j<n)
    {
        m.insert(a[j]);
        if(j<k-1)
        {
            j++;
        }
        else
        {
            ans.push_back(*m.begin());
            m.erase(m.find(a[i]));
            i++;
            j++;
        }
    }
    for(int x : ans)
        cout<<x<<" ";
    return 0;
}