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
  ll n,x;
  cin>>n>>x;
  vector<pair<ll,ll>> v;
  for(int i=0;i<n;i++)
  {
    ll p;
    cin>>p;
    v.push_back(make_pair(p,i+1));
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n-2;i++)
  {
    ll l=i+1,h=n-1;
    while(l<h)
    {
      if(v[l].first+v[h].first>x-v[i].first) h--;
      else if(v[l].first+v[h].first<x-v[i].first) l++;
      else
      {
        cout<<v[l].second<<" "<<v[h].second<<" "<<v[i].second<<endl;
        return 0;
      }
    }
  }
  cout<<"IMPOSSIBLE"<<endl;
  return 0;
}
