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
  ll n;
  cin>>n;
  vector<pair<ll,ll>> v;
  for(int i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    while(!v.empty() && v.back().first>=x)
    {
      v.pop_back();
    }
    if(!v.empty())
    {
      cout<<v.back().second+1<<" ";
    }
    else
    {
      cout<<0<<" ";
    }
    v.emplace_back(x,i);
  }
  return 0;
}
