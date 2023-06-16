#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    int c1=0,c2=0,c3=0,c4=0;
    for(int i = 0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c1++;
            if(a[i]<0) c3++;
            else if(a[i]>0) c4++;
        }
        else
        {
            c2++;
            if(a[i]<0) c3++;
            else if(a[i]>0) c4++;
        }
    }
    cout<<"Even: "<<c1<<"\n";
    cout<<"Odd: "<<c2<<"\n";
    cout<<"Positive: "<<c4<<"\n";
    cout<<"Negative: "<<c3<<"\n";
    return 0;
}