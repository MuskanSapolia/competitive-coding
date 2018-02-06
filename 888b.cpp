#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int x=0,y=0;
  for(int i=0;i<n;i++){
    if(s[i]=='L')  x--;
    if(s[i]=='R')  x++;
    if(s[i]=='D')  y--;
    if(s[i]=='U')  y++;
  }
  if(x==0 && y==0)
  cout<<n;
  else cout<<n-fabs(x)-fabs(y);
}
