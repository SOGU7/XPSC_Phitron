#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>>a(n);
    for(int i = 0;i<n;i++) 
    {
        int k;
        cin>>k;
        a[i] = {k,i+1};
    }
    sort(a.begin(),a.end());
    for(int i = 0;i<n;i++)
    {
        int l = 0,r = n-1;
        while(l!=r)
        {
            int target = x - a[i].first;
            if((a[l].first + a[r].first == target) && (l!=i && r!=i))
            {
                cout<<a[l].second<<" "<<a[r].second<<" "<<a[i].second<<"\n";
                return 0;
            }
            else if(a[l].first + a[r].first > target)
                r--;
            else l++;
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}