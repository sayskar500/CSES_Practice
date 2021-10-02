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
  int n;
  cin>>n;
  vector<int> v[n+1];
  //vector<pair<int,int>> g;
  for(int i=1;i<=n;i++)
  {
  	int x;
  	cin>>x;
  	v[x].push_back(i);
  }
  //sort(g.begin(),g.end());
  int cnt=1,ans=1;
  for(int i=1;i<=n;i++)
  {
  	if(ans>v[i][0]) cnt++;
  	ans=v[i][0];
  }
  cout<<cnt<<"\n";
  return 0;
}
