#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i =0;i<n;i++) cin>>a[i];
    for(int i =0;i<n;i++) cin>>b[i];
    int front = -1;
    int rear =-1 ;
    for(int i = 0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            rear = i;
            if(front == -1)
            {
                front = i;
            }
        }
    }
    while(b[front - 1]<=b[front] && front>0) front--;
    while(b[rear]<=b[rear+1] && rear<n-1) rear++;

    
    
   cout<<front+1<<" "<<rear+1<<"\n";
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