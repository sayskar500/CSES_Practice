#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int n;
  cin>>n;
  for(ll k=1;k<=n;k++)
  {
    ll p=((k*k)*((k*k)-1))/2;
    p-=4*(k-1)*(k-2);
    cout<<p<<endl;
  }
  return 0;
}
