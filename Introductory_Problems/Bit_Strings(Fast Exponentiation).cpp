#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll power(ll x,ll y)
{
    ll res = 1;
    x = x % mod;
    if (x == 0) return 0;

    while (y > 0)
    {
        if (y & 1)
          res = (res*x) % mod;

        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}

int main()
{
  ll n;
  cin>>n;
  cout<<power(2,n)<<endl;
  return 0;
}
