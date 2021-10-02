#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll findTrailingZeros(ll n)
{
  int cnt=0;
  //Keep diving n by powers of 5 and update count.
  for(int i=5;n/i>=1;i*=5)
  {
    cnt+=n/i;
  }

  return cnt;
}

ll fact(ll n)
{
  if(n==0 || n==1) return 1;

  return n*fact(n-1);
}

int main()
{
  ll n;
  cin>>n;
  ll o=fact(n);
  cout<<findTrailingZeros(n)<<endl;
  return 0;
}
