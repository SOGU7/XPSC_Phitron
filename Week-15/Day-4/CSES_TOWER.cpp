#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        int l = 0 ,r = a.size();
        while(r>l)
        {
            int mid = l+(r-l)/2;
            if(a[mid]>x)
            {
                r = mid;
            }
            else l = mid+1;
        }
        if(l == a.size()) a.push_back(x);
        else a[l] = x;
    }
    cout<<a.size();

    return 0;
}