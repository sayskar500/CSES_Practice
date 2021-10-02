#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Solve()
{
  ll n;
  cin>>n;
  vector<ll> v;
  v.push_back(n);
  while(n!=1)
  {
    if(n&1)
    {
      n=(n*3)+1;
      v.push_back(n);
    }
    else
    {
      n=n/2;
      v.push_back(n);
    }
  }
  for(auto it:v)
  {
    cout<<it<<" ";
  }
  cout<<endl;
}

int main()
{
  Solve();
  return 0;
}
