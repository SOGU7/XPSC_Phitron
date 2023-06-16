#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int sum = 0;
  int i = 0;
  while(i<2)
  {
    if(a>b)
    {
      sum+=a;
      a--;
    }
    else
    {
      sum+=b;
      b--;
    }
    i++;
  }
  cout<<sum;
  return 0;
}