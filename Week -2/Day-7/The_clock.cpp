#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
bool is_palindrome(string s)
{
    string ans = s;
    reverse(ans.begin(),ans.end());
    if(s ==  ans) return true;
    return false;
}
void solve()
{
    string t;
    cin>>t;
    int n;
    cin>>n;
    int hr = (n/60);
    int mins = n - (hr*60);
    int time_hour = ((t[0] - '0')*10) + (t[1]-'0');
    int time_min = ((t[3] - '0')*10) + (t[4]-'0');
    ll count = 0;
    bool flag = true;
    int c = 0;
    int i = n%60;
    while(flag)
    {
        time_hour+=hr;
        time_min+=mins;
        if(time_min>=60)
        {
            time_hour++;
            time_min = time_min - 60;
        }
        if(time_hour == 25)
        {
            time_hour = 1;
        }
        string s;
        int temmp = time_hour/10;
        int temp = time_hour%10;
        s.push_back(temmp);
        s.push_back(temp);
        s.push_back(':');
        int temp2 = time_min/10;
        int temp3 = time_min%10;
        s.push_back(temp2);
        s.push_back(temp3);
        if(is_palindrome(s)) count++;
        i+=n;
    }
    cout<<count<<"\n";
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