#include <iostream>
using namespace std;
int main(){
  int t,n,m;
  cin>>t;
  while(t--){
    cin>>n>>m;
    int count = 0;
    string s[n];
    for(int j = 0; j < n; j++){
      cin>>s[j];
      int count1 = 0,count2 = 0;
      for(int i = 0; i < m; i++){
        if(i%2 == 0){
          if(s[j][i] == 'R'){
            count2 += 5;
          }else{
            count1 += 3;
          }
        }
        else{
           if(s[j][i] == 'R'){
             count1 += 5;
            }else{
              count2 += 3;
            }

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
