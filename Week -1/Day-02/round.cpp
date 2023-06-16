#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    double cmp = floor(x) + 0.5;
    if(x<cmp)
    {
        cout<<floor(x);
    }
    else
    {
        cout<<ceil(x);
    }
    return 0;
}