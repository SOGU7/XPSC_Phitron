#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int count0 = 0;
    int count1 = 0;
    for(int i =0;i<n;i++)
    {
        char ch;
        cin>>ch;
        if(ch == '0') count0++;
        else count1++;
    }
    int mini = min(count0,count1);
    if(mini & 1) cout<<"Zlatan\n";
    else cout<<"Ramos\n";
}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}