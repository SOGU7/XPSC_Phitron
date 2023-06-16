#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>primes;
    vector<bool>visited(n+1);
    for(int i = 2;i<=n;i++)
    {
        if(!visited[i])
        {
            primes.push_back(i);
            for(int j = i;j*i<=n;j++)
            {
                visited[i*j] = true;
            }
        }
    }
    for(int x : primes)
    {
        cout<<x<<" ";
    }
    return 0;
}