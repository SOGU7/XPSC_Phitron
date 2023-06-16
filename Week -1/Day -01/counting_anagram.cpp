#include<bits/stdc++.h>
using namespace std;
int main()
{
    string txt,pat;
    cin>>txt >> pat;
    int n = txt.size();
    int k = pat.size();
    int fr1[26] = {0};
    int fr2[26] = {0};
    for(int i =0;i<k;i++)
    {
        fr1[pat[i]-'a']++;
    } 
    int i = 0,j = 0,ans = 0;
    while(j<n)
    {
        fr2[txt[j]-'a']++;        //forxxorfxdofr
        if(j<k-1)
        {
            j++;
        }
        else
        {
            bool flag = true;
            for(int v = 0;v<26;v++)
            {
                if(fr1[v]!=fr2[v])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
            fr2[txt[i]-'a']--;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

