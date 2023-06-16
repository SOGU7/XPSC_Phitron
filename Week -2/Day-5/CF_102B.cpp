#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string T;
    cin>>T;
    ll sum = 0;
    int count = 0;
    for(int i =0;i<T.size();i++)
    {
        sum+=T[i]-'0'; 
    }
    if(sum>0 && T.size()>1) count++;
    int dig_sum = 0; 
    while(sum>=10)
    {
        while(sum!=0)
        {
            int rem = sum%10;
            dig_sum+=rem;
            sum/=10;
        }
        sum = dig_sum;
        count++;
        dig_sum = 0; 
    }
    cout<<count;

}

int main()
{
    fastread();
    solve();
     
    return 0;
}