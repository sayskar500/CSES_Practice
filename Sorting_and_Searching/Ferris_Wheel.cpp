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
  vector<ll> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  ll i=0,j=n-1,cnt=0;
  while(i<=j)
  {
    if(v[j]+v[i]>x) j--;
    else {i++; j--;}

    cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}
