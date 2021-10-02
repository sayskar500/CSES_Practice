#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define mod 1000000007

int price(vector<int>& a,vector<int>& b,int x,int n)
{
  int dp[n+1][x+1];
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=x;j++)
    {
      if(i==0 || j==0) dp[i][j]=0;
    }
  }
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=x;j++)
    {
      if(a[i-1]<=j)
      {
        dp[i][j]=max(b[i-1]+dp[i-1][j-a[i-1]],dp[i-1][j]);
      }
      else if(a[i-1]>j)
      {
        dp[i][j]=dp[i-1][j];
      }
    }
  }
  return dp[n][x];
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n,x;
  cin>>n>>x;
  vector<int> h(n),s(n);
  for(int i=0;i<n;i++)
  {
    cin>>h[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>s[i];
  }
  cout<<price(h,s,x,n)<<endl;
  return 0;
}
