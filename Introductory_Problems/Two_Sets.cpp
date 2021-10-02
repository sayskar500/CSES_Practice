#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  vector<ll> a,b;
  ll n;
  cin>>n;
  ll g=(n*(n+1))/2;

  if(g%2==0)
  {
    cout<<"YES"<<endl;

    g/=2;

    while(n)
    {
      if(g-n>=0)
      {
        a.push_back(n);
        g-=n;
      }
      else
      {
        b.push_back(n);
      }

      n--;
    }

    cout<<a.size()<<endl;
    for(auto k:a)
    {
      cout<<k<<" ";
    }
    cout<<endl;
    cout<<b.size()<<endl;
    for(auto l:b)
    {
      cout<<l<<" ";
    }
    cout<<endl;
  }

  else
  {
    cout<<"NO"<<endl;
  }

  return 0;
}
