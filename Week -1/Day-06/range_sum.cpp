#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        long long mini = min(l,r);
        long long mx = max(l,r);
        long long n = (mx-mini)+1;
        long long sum = (n*(2*mini+(n-1)))/2;
        cout<<sum<<"\n";
    }
    return 0;
}