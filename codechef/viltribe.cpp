#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  string s;
  int counta,countb=0;
  while(t--){
  cin>>s;
  counta=0,countb=0;
  int prev = 0;
  char prevvalue = '.';
  for(int i=0;i<s.length();i++){
    if(s[i]!='.'){
      if(s[i]==prevvalue){
      if(prevvalue == 'A')
        counta = counta + i-prev;
      else
        countb = countb + i -prev;
      prev = i;
      }
      else{
     prev = i;
     if(prevvalue=='A')
       counta++;
     if(prevvalue == 'B')
       countb++;
     prevvalue = s[i];
    }
  }
 }
  if(prevvalue=='A')
    counta++;
  if(prevvalue=='B')
    countb++;
  cout<<counta<<" "<<countb<<endl;
  }
}
