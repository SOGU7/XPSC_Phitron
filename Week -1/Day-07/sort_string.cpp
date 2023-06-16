#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fr[26] = {0};
    for(int i = 0;i<n;i++)
    {
        char ch;
        cin>>ch;
        fr[ch-'a']++;
    }
    for(int i = 0;i<26;i++)
    {
        if(fr[i]!=0)
        {
            char c = i+'a';
            for(int j = 1;j<=fr[i];j++)cout<<c;
        }
    }
    return 0;
}