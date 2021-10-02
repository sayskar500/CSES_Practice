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
  vector<ll> dp(n+1,0);
  dp[0]=1;
  for(int i=1;i<n+1;i++)
  {
    for(int x=1;x<=6;x++)
    {
      if(x>i) break;
      dp[i]=(dp[i]+dp[i-x])%mod;
    }
  }
  cout<<dp[n]%mod<<endl;
  return 0;
}
