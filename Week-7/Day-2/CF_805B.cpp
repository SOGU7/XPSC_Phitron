#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ans;
    bool flag = true;
    for(int i =0;i<n/2;i++)
    {
        if(flag)
        {
            ans.push_back('a');
            ans.push_back('a');
            flag = false;
        }
        else
        {
            ans.push_back('b');
            ans.push_back('b');
            flag = true;
        }
    }
    if(n&1)
    {
        if(ans[n-2] == 'b')
            ans.push_back('a');
        else
            ans.push_back('b');       
    }
    cout<<ans<<"\n";

    return 0;
}