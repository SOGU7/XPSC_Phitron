#include<bits/stdc++.h>
using namespace std;
int main()
{
    string T;
    cin>>T;
    for(int i =0;i<T.size();i++)
    {
        if(T[i] == 'E')
        {
            if(T[i+1] == 'G')
            {
                if(T[i+2] == 'Y')
                {
                    if(T[i+3] == 'P')
                    {
                        if(T[i+4] == 'T')
                        {
                            T[i] = ' ';
                            T.erase(i+1,4);
                            continue;
                        }
                    }
                }
            }
        }
    }
    cout<<T;
    return 0;
}