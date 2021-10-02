#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define v 1000000007
/************
SAYANTAN SARKAR
SRMIST, CHENNAI
************/

long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
      if (b & 1)
          res = res * a % m;
      a = a * a % m;
      b >>= 1;
    }
    return res;
}

void Solve()
{
  ll a,b;
  cin>>a>>b;
  cout<<binpow(a,b,v)<<endl;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    Solve();
  }
  return 0;
}
