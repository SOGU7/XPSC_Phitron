#include<bits/stdc++.h>
using namespace std;
int Count(int n)
{
    int c = 0;
    while(n)
    {
        if((n&1)) c++;
        n>>=1;
    }
    return c;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+1];
    for(int i =0;i<=m;i++) cin>>a[i];
    int count = 0;
    for(int i =0;i<m;i++)
    {
        if(Count(a[i]^a[m])<=k) count++; // __builtin_popcount() use kora jabe count er jaigai
    }
    cout<<count;

    return 0;
}