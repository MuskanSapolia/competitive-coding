#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,m;
  cin>>t;
  while(t--){
    cin>>n>>m;
    int count = 0;
    string s[n];
    for(int i = 0; i < n; i++){
      cin>>s[i];
    }
    for(int j = 0 ; j < n; j++){
      int count1 = 0,count2 = 0;
      for(int i = 0; i < m; i++){
      if(i%2 == 0){
        if(s[j][i] != 'R')
          count1 += 3;
        if(s[j][i] != 'G')
          count2 += 5;
      }
      else{
         if(s[j][i] != 'G')
           count1 += 5;
         if(s[j][i] != 'R')
           count2 += 3;
      }
      }
      if(count1 < count2)
        count += count1;
      else
        count += count2;
    }
    
     cout<<count<<endl;
    
  }
}
