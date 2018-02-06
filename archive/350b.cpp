#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<int,int>&a,const pair<int,int>&b)
{
  return (abs(a.first)+abs(a.second)) < (abs(b.first)+abs(b.second));
}

int  main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n,r1,r2;
  cin>>n;
  pair<int,int>p[n];
  int x,y,c=0;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    cin>>y;
    p[i]={x,y};
    if(p[i].first!=0&&p[i].second!=0)
      c=c+6;
    if(p[i].second==0||p[i].first==0)
      c=c+4;
  }
  sort(p,p+n,compare);
  cout<<c<<"\n";
  for(int i = 0; i < n; i++){
      x = p[i].first,
      y = p[i].second;
      if(x < 0){  cout<<"1 "<<abs(x)<<" L"<<"\n"; }
      if(x > 0) {  cout<<"1 "<<x<<" R"<<"\n"; }
      if(y < 0){ cout<<"1 "<<abs(y)<<" D"<<"\n"; }
      if(y > 0) {  cout<<"1 "<<abs(y)<<" U"<<"\n"; }
      cout << "2\n";
      if(x > 0)  { cout<<"1 "<<x<<" L"<<"\n"; }
      if(x < 0)  {  cout<<"1 "<<abs(x)<<" R"<<"\n"; }
      if(y > 0)  { cout<<"1 "<<y<<" D"<<"\n"; } 
      if(y < 0)  {  cout<<"1 "<<abs(y)<<" U"<<"\n"; }
      cout << "3\n";
  }
  return 0;
}
