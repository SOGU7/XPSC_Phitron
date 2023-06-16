#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string T;
        cin>>T;
        int fr[26] = {0};
        for(int i =0;i<T.size();i++)
        {
            fr[T[i]-'A']++;
        }
        int count = 0;
        for(int i=0;i<26;i++)
        {
            if(fr[i]!=0)
            {
                count+= fr[i]+1;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}