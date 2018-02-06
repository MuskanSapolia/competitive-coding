#include<iostream>
using namespace std;
int main(){
  int t,n,m;
  cin>>t;
  while(t--){
    cin>>n>>m;
    string s[n];
    for(int i= 0; i < n; i++)
      cin>>s[i];
    int count1 = 0,count2 = 0;
    for(int i = 0; i < n; i++){
      for(int j = 0; j< m; j++){
        if((i+j)%2 == 0){
          if(s[i][j] != 'R') count1 += 3;
          else count2 += 5;
        }
        else{
          if(s[i][j] != 'G') count1 += 5;
          else count2 += 3;
        }
      }
    }
    cout<<min(count1,count2)<<endl;
    }
}
