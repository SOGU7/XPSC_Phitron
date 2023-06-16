#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    int mini = INT_MAX;
    int count = 2;
    int i = 0,j=0;
    int temp = k;
    while(j<n)
    {
        mini = min(a[j],mini);
        if(j<k-1)
        {
            j++;
        }
        else
        {
            cout<<mini<<" ";           
            i = k;
            j++;
            k = temp*count++;
            mini = INT_MAX;
        }
    }
    if(n%temp!=0) cout<<mini<<" ";
    return 0;
}