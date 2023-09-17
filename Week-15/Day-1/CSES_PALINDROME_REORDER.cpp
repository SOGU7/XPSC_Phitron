#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    //cout<<a;
    int fr[26] = {0};
    int n = a.size();
    for(int i = 0;i<n;i++)
    {
        int z = a[i] - 'A';
        fr[z]++;
    }
    int check = 0;
    for(int i = 0;i<26;i++)
        check+= (fr[i]%2);
    if(check>1) {
        cout<<"NO SOLUTION";
        return 0;
    }
    string ans;
    for(int i = 0;i<26;i++)
    {
        if(!(fr[i]%2))
        {
            for(int j = 0;j<(fr[i]/2);j++)
            {
                ans.push_back(i+'A');
            }
        }  
    }
    for(int i = 0;i<26;i++)
    {
        if((fr[i]%2))
        {
            for(int j = 0;j<(fr[i]);j++)
            {
                ans.push_back(i+'A');
            }
        }  
    }
    for(int i = 25;i>=0;i--)
    {
        if(!(fr[i]%2))
        {
            for(int j = 0;j<(fr[i]/2);j++)
            {
                ans.push_back(i+'A');
            }
        }  
    }
    cout<<ans;
    
    return 0;
}