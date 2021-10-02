#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Solve()
{
  ll n;
  cin>>n;
  int a[n],b[n-1],sum=0;
  set<int> s;
  for(int i=1;i<n;i++)
  {
    cin>>b[i];
    sum+=b[i];
  }
  ll f=(n*(n+1))/2;
  cout<<abs(f-sum)<<endl;
}

int main()
{
  Solve();
  return 0;
}
