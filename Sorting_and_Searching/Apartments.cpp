#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define mod 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll> a(n),b(m);
  for(auto i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(auto i=0;i<m;i++)
  {
     cin>>b[i];
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  ll s=0,l=0,cnt=0;
  while(s<n && l<m)
  {
    if(abs(a[s]-b[l])<=k)
    {
      cnt++;
      s++;
      l++;
    }
    else
    {
      if(a[s]>b[l]) l++;
      else s++;
    }
  }
  cout<<cnt<<endl;

  return 0;
}
