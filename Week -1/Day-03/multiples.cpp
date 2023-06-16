#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int i = 2;
    bool flag = true;
    while(c<=b)
    {
        if(c>=a)
        {
            cout<<c;
            flag = false;
            break;
        }       
        c = c*i;
        i++;
    }
    if(flag) cout<<-1;
    return 0;
}