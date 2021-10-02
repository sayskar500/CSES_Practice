#include<iostream>
using namespace std;
#define ll long long

void Solve()
{
  string s;
  cin>>s;
  int n=s.length();
  int ans=0,cnt=1;
  for(int i=0;i<n;i++)
  {
    if(s[i]==s[i+1])
    {
      cnt++;
    }
    else
    {
      cnt=1;
    }
    ans=max(ans,cnt);
  }
  cout<<ans<<endl;
}

int main()
{
  Solve();
  return 0;
}
