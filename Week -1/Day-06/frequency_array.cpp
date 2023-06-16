#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int fr[k+1] = {0};
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        fr[a[i]]++;
    }
    for(int i =1;i<=k;i++)
    {
        cout<<fr[i]<<"\n";
    }
    return 0;
}