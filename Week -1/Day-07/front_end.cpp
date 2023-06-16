#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    int mid;
    if(n%2 == 0) 
    {
        mid = n/2;
        for(int i = 0;i<mid;i++)
        {
            cout<<a[i]<<" "<<a[n-i-1]<<" ";            
        }
    }
    else
    {
        mid = (n/2)+1; 
        for(int i = 0;i<mid-1;i++)
        {
            cout<<a[i]<<" "<<a[n-i-1]<<" ";
        }
        cout<<a[mid-1]<<" ";
    } 
    return 0;
}