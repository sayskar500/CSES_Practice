#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define mod 1000000007

ll totalSum;

ll findMin(vector<ll>& h,ll r,ll curSum)
{
  // (totalSum-curSum) is set 1
  // curSum is set 2

  // base condition
  if(r==0) return abs((totalSum-curSum)-curSum);

  // we either include h[i] into second set or we don't
  // and we check which option gives us the smallest value
  return min(findMin(h,r-1,curSum+h[r-1]),findMin(h,r-1,curSum));
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll n;
  cin>>n;
  vector<ll> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
    totalSum+=v[i];
  }
  cout<<findMin(v,n,0)<<endl;
  return 0;
}
