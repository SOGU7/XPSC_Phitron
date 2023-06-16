#include<bits/stdc++.h>
using namespace std;
int main()
{
    string T;
    cin>>T;
    string s = T;
    reverse(T.begin(),T.end());
    if(s==T)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}