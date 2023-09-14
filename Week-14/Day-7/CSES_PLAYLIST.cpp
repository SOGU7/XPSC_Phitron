#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    int i = 0,j = 0;
    set<int>s;
    int ans = -1;
    while(j<n)
    {
        s.insert(a[j]);
        if(s.size()<(j-i+1))
        {
            int sz = s.size();
            ans = max(ans,sz);
            s.clear();
            i = j;
            j++;
            continue;
        }
        j++;
    }
    j--;
    ans = max(ans,(j-i+1));
    cout<<ans;

    return 0;
}