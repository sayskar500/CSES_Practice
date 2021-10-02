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
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  vector<string> v;
  v.push_back(s);
  while(next_permutation(s.begin(),s.end()))
  {
    v.push_back(s);
  }
  cout<<v.size()<<endl;
  for(auto g:v) cout<<g<<endl;
  return 0;
}
