#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define mod 1000000007

ll find(vector<ll>&u,ll s,ll n)
{
  vector<ll> dp(s+1,0);
  dp[0]=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=s;j++)
    {
      if(j>=u[i-1]) dp[j]=(dp[j]+dp[j-u[i-1]])%mod;
    }
  }
  return dp[s];
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
  cout<<find(v,x,n)<<endl;
  return 0;
}
