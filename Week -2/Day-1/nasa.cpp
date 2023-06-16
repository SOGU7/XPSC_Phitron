#include<bits/stdc++.h>
#define  ll  long long;
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

bool is_palindrome(int n)
{
    string s = to_string(n);
    string ans = s;
    reverse(s.begin(),s.end());
    return s == ans;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int fr[32768] = {0};
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        fr[a[i]]++;
    }
    vector<int>ans;
    for(int i = 0;i<=32768;i++)
    {
        if(is_palindrome(i))
            ans.push_back(i);
    }
    long long ans1 = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<ans.size();j++)
        {
            int k = a[i]^ans[j];
            if(k>32768)
            {
                continue;;
            }
            if(fr[k]!=0)
            {
                ans1+=fr[k];
            }

        }
    }
    cout<<(ans1+n)/2<<"\n";
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