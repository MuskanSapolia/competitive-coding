#include<bits/stdc++.h>
using namespace std;
string s;
int freq[26];

int check(int k){
  int n = s.length();
  memset(freq,0,26*sizeof(int));
  for(int i=0;i<k;i++)
    freq[s[i]-'a']++;
  for(int i=k;i<n;i++){
    if(freq[s[i]-'a']>0)
      freq[s[i]-'a']++;
    freq[s[i-k]-'a']--;
  }
    for(int i=0;i<26;i++)
      if(freq[i]>0)
        return 1;
    return 0;
}

int main(){
  cin>>s;
  int k=0,l=0,h=s.length();
  while(l<=h){
    if(k==(l+h)/2) break;
    k = (l+h)/2;
    if(check(k))
      h=k;
    else
      l=k+1;
  }
  if(l > h) swap(l, h);
  if(check(l)) k = l;
  else k = h;
  cout<<k<<endl;
}
