#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define mod 1000000007

ll fck(ll g)
{
  vector<ll> dp(g+1);
  dp[0]=0;
  for(int i=1;i<=g;i++)
  {
    ll t=i;
    ll minSteps=INT_MAX;
    while(t>0)
    {
      ll d=t%10;
      t/=10;
      if(d==0) continue;
      minSteps=min(minSteps,1+dp[i-d]);
    }
    dp[i]=minSteps;
  }

  return dp[g];
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll n;
  cin>>n;
  cout<<fck(n)<<endl;
  return 0;
}
