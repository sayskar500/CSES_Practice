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
  ll t;
  cin>>t;
  bool a[t+1][t+1];
  for(int i=1;i<=t;i++)
  {
    for(int j=1;j<=t;j++)
    {
      char c;
      cin>>c;
      if(c=='.') a[i][j]=0;
      else a[i][j]=1;
    }
  }
  ll dp[t+1][t+1];
  for(int i=t;i>=1;i--)
  {
    for(int j=t;j>=1;j--)
    {
      if(i==t && j==t) dp[i][j]=1;
      else
      {
        ll p = (i==t) ? 0 : dp[i+1][j];
        ll o = (j==t) ? 0 : dp[i][j+1];
        dp[i][j]=(o+p)%mod;
        if(a[i][j]) dp[i][j]=0;
      }
    }
  }
  if(a[t][t]) cout<<0<<endl;
  else cout<<dp[1][1]<<endl;
  return 0;
}
