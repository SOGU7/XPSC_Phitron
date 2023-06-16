#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx = max(a,b);
    int mini = min(a,b);
    int i = 1;
    int rem;
    bool flag = true;
    if(c%a == 0 || c%b == 0)
    {                                 // 11 34 383
        cout<<"Yes";
        return 0;
    }
    int tem = mx;
    while(mx<=c)
    {
        rem = c-mx;
        if(rem%mini == 0)
        {
            flag = false;
            cout<<"Yes";
            break;
        }
        i++;
        mx = tem*i;
    }
    if(flag) cout<<"No";
    return 0;
}