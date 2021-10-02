#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define mod 1000000007

ll n,m,e,f,g,h;
bool vis[1005][1005];
char v[1005][1005];
ll dist[1005][1005];

bool chk(ll x, ll y)
{
    if(x<1 or x>n or y<1 or y>m) return false;
    if(vis[x][y]==true or v[x][y]=='#') return false;

	return true;
}

ll dx[]={-1, 0, 1, 0};
ll dy[]={0, 1, 0, -1};
string dir="URDL";

void bfs(ll a,ll b)
{
	queue<pair<ll,ll>> q;
	q.push({a,b});
	vis[a][b]=1;
	dist[a][b]=0;
	while(!q.empty())
	{
		ll x=q.front().first;
		ll y=q.front().second;
		q.pop();
		for(ll i=0;i<4;i++)
		{
			if(chk(x+dx[i],y+dy[i]))
			{
				ll na=x+dx[i];
				ll nb=y+dy[i];

				dist[na][nb]=dist[x][y]+1;
				vis[na][nb]=1;
				v[na][nb]=dir[i];
				q.push({na,nb});
			}
		}
	}
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin>>n>>m;
  for(ll i=1;i<=n;i++)
  {
  	for(ll j=1;j<=m;j++)
  	{
  		cin>>v[i][j];
  		if(v[i][j]=='A')
  		{
  			e=i;
  			f=j;
  		}
        if(v[i][j]=='B')
        {
        	g=i;
        	h=j;
        }
  	}
  }
  bfs(e,f);
  if(v[g][h]=='B') cout<<"NO"<<"\n";
  else
  {
  	ll w=g,p=h;
    cout<<"YES"<<"\n";
    string s="";
    while(e!=g or f!=h)
    {
    	s+=v[g][h];
    	if(s.back()=='D') g--;
        else if(s.back()=='U') g++;
        else if(s.back()=='R') h--;
        else h++;
    }
    reverse(s.begin(),s.end());
    cout<<dist[w][p]<<"\n"<<s<<"\n";
  }
  return 0;
}
