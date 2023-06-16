#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem,rev=0;
    int temp = n;
    while(temp!=0)
    {
        rem = temp%10;
        rev = (10*rev)+rem;
        temp/=10;
    }
    cout<<rev<<"\n";
    if(rev == n) cout<<"YES";
    else cout<<"NO";
}