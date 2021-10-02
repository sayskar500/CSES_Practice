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
  int n;
  cin>>n;
  pair<int,int> v[n];
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    v[i]={x,i};
  }
  int mx=0;
  int l=0;
  set<pair<int,int>> s;
  for(int i=0;i<n;i++)
  {
    int e=v[i].first;
    auto f=s.lower_bound({e,-1});
    if(f==s.end() || f->first>e) s.insert(v[i]);
    else
    {
      mx=max(mx,(int)s.size());
      for(int j=l;j<f->second+1;j++)
      {
        s.erase(v[j]);
      }
      l=f->second+1;
      s.insert(v[i]);
    }
  }
  mx=max(mx,(int)s.size());
  cout<<mx<<endl;
  return 0;
}
