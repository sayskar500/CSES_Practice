#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
  ll a,b;
  cin>>a>>b;
  ll k=(a+b);
  if(k%3==0)
  {
    if(b>a && b>2*a || a>b && a>2*b)
    {
      cout<<"NO"<<endl;
    }
    else
    {
      cout<<"YES"<<endl;
    }
  }
  else
  {
    cout<<"NO"<<endl;
  }
}

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
