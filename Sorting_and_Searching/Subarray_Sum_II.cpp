#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define mod 1000000007

void subsum(vector<ll>& a,ll f,ll s)
{
  map<ll,ll> mp;
  ll cur=0,cnt=0;
  for(int i=0;i<f;i++)
  {
    cur=cur+a[i];
    if(cur==s) cnt++;
    if(mp.find(cur-s)!=mp.end()) cnt+=mp[cur-s];
    mp[cur]++;
  }
  cout<<cnt<<endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll n,x;
  cin>>n>>x;
  vector<ll> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  subsum(v,n,x);
  return 0;
}
