#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Solve()
{
  int n;
  cin>>n;
  if(n==1)
  {
    cout<<1<<endl;
  }
  else if(n>3)
  {
    for(int i=1;i<=n;i++)
    {
      if(i%2==0)
      {
        cout<<i<<" ";
      }
    }
    for(int i=1;i<=n;i++)
    {
      if(i%2!=0)
      {
        cout<<i<<" ";
      }
    }

  }
  else
  {
    cout<<"NO SOLUTION"<<endl;
  }
}

int main()
{
  Solve();
  return 0;
}
