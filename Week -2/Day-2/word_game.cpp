#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<string,int>m;
    string v[3][n];
    for(int i =0;i<3;i++)
    {
        for(int j = 0;j<n;j++)
        {
            string T;
            cin>>T;
            v[i][j] = T;
            m[T]+=i+1;
        }
    }
    vector<int>ans;
    
    for(int i =0;i<3;i++)
    {
        int num_count = 0;
        for(int j = 0;j<n;j++)
        {
            int no = m[v[i][j]];
            if(no == i+1)
                num_count+=3;
            else if(no == 3 || no == 4 || no == 5)
                num_count+=1;
            else
                num_count+=0;
            
        }
        ans.push_back(num_count);
    }
    for(auto val : ans)
    {
        cout<<val<<" ";
    }
    cout<<"\n";
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