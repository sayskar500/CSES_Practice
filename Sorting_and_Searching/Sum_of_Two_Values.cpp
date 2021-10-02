#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ll n,x;
   cin>>n>>x;
   vector<pair<int, int>> a(n);
   for(int i=0;i<n;i++)
   {
     cin>>a[i].first;
     a[i].second=i+1;
   }
   sort(a.begin(),a.end());
   int i=0,j=n-1;
   while(i<j)
   {
     if(a[i].first+a[j].first==x)
     {
       cout<<a[i].second<<" "<<a[j].second<<endl;
       return 0;
     }
     if(a[i].first+a[j].first<x)
     {
       i++;
     }
     else
     {
       j--;
     }
   }
   cout<<"IMPOSSIBLE"<<endl;
   return 0;
}
