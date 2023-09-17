#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p,pair<int,int>q)
{
    return p.second < q.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i = 0;i<n;i++)
        cin>>a[i].first>>a[i].second;
    sort(a.begin(),a.end(),cmp);
    int count = 1;
    int i = 0, j = 1;
    while(j<n)
    {
        int now = a[i].second;
        int nxt = a[j].first;
        if(nxt >= now)
        {
            count++;
            i = j;
            j++;
            continue;
        }
        j++;
    }
    cout<<count;

    return 0;
}