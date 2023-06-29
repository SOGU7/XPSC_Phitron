#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
bool binary_search(int a[],int l,int r,int val)
{
    int mid = (l+r)/2;
    if(l>r) return false;
    else if(a[mid] == val) return true;
    else if(a[mid]>val) 
    {
        r = mid - 1;
        return binary_search(a,l,r,val);
    }
    else if(a[mid]<val)
    {
        l = mid+1;
        return binary_search(a,l,r,val);
    }
}

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    int pre[n];
    pre[0] = a[0];
    for(int i =1;i<n;i++)
    {
        pre[i] = pre[i-1] + a[i];
    }
    int ans = n;
    for(int i = 0;i<n;i++)
    {
        int sum = pre[i];
        sum+=sum;
        int cur = i+1,last = i;
        int indx;
        while(binary_search(pre,cur,n-1,sum))
        { 
            indx =  (lower_bound(pre,pre+n,sum)) - pre;
            sum+=pre[i];
            cur =  max(cur,indx-last);
            last = indx;
        }
        if(last == n-1) ans = min(ans,cur);
    }
    cout<<ans<<"\n";
}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}