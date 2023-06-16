#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum = 0;
    int count = 1;
    for(int i = a;i<=c;i=(a*++count))
    {
        sum+=b;
    }
    cout<<sum;
    return 0;
}