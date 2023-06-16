#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  if(m<n)
  {
    cout<<0;
    return 0;
  }
  int ans = (m-n)+1;
  cout<<ans;
  return 0;
}