#include<bits/stdc++.h>
using namespace std;
long long fact(int n)
{
    if(n == 0 || n == 1) return 1;
    return n*fact(n-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long ans = fact(n);
        cout<<ans<<"\n";
    }
    return 0;
}