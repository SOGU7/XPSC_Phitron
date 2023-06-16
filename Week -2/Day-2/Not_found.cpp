#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string T;
    cin>>T;
    int fr[26] = {0};
    for(int i =0;i<T.size();i++)
    {
        fr[T[i]-'a']++;
    }
    bool flag = true;
    for(int i = 0;i<26;i++)
    {
        if(fr[i] == 0)
        {
            char ch = i + 'a';
            cout<<ch;
            flag = false;
            break;
        }
   }
   if(flag) cout<<"None";    
}

int main()
{
    fastread();
    solve();
     
    return 0;
}