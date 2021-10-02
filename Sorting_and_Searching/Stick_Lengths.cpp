#include<bits/stdc++.h>
using namespace std;
#define ll long long

long int length(vector<int> a,int t)
{
  long int cost=0;
  for(auto h:a)
  {
    cost+=abs(t-h);
  }
  return cost;
}

int main()
{
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  int g=a[n/2];
  cout<<length(a,g);
  return 0;
}
