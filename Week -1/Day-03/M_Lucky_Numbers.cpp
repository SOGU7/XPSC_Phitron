#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int rem;
    int count = 0;
    for(int i = a;i<=b;i++)
    {
        int temp = i;
        bool flag = false;
        while(temp>0)
        {
            rem = temp%10;
            if(rem != 4 && rem != 7)
            {
                flag = true;
                break;
            }
            temp /= 10;
        }
        if(flag == false) { cout<<i<<" "; count++;}
    }  
    if(count == 0) cout<<-1;
    return 0;
}