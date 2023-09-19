#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<pair<int,int>>st;
    st.push({0,0});
    for(int i = 1;i<=n;i++)
    {
        int x;
        cin>>x;
        while(!st.empty() && st.top().first>=x) st.pop();
        cout<<st.top().second<<" ";
        st.push({x,i});
    }
    return 0;
}