#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int mini = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        mini = min(a[i],mini);
    }
    int count = 0;
    for(int i =0;i<n;i++)
    {
        if(a[i] == mini) count++;
    }
    if(count%2==0) cout<<"Unlucky";
    else cout<<"Lucky";
    return 0;
}