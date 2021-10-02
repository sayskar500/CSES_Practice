#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  ll sum=0;
  for(int i=1;i<n;i++)
  {
    if(a[i]<a[i-1])
    {
      sum+=abs(a[i]-a[i-1]);
      a[i]=a[i]+abs(a[i]-a[i-1]);
      continue;
    }
  }
  cout<<sum<<endl;
  return 0;
}
