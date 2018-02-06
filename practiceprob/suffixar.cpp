#include<bits/stdc++.h>
using namespace std;
string s;
int n;
bool cmp(int a,int b){
  string a1 = s.substr(a,n-a);
  string b1 = s.substr(b,n-b);
  return a1<b1;
}
int main(){
  cin>>s;
  n=s.length();
  int p[n];
  for(int i=0;i<n;i++){
    p[i] = i;
  }
  sort(p,p+n,cmp);
  for(int i=0;i<n;i++)
    cout<<p[i]<<" "<<endl;
}
