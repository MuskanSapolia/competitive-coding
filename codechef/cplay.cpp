#include<iostream>
using namespace std;
int main(){
  string s;
  while(cin>>s){
    int a =0, b = 0;
    for(int i = 0; i < 9; i+=2){
      if(s[i] == '1')   a++;
      if(s[i+1] == '1') b++;
    }
    if(a==b){
      for(int i = 10; i < 19; i+=2){
        if(s[i] == '1')   a++;
        if(s[i+1] == '1') b++;
        if(a > b) {cout<<"TEAM-A "<<i+2<<endl; break; }
        if(b > a) {cout<<"TEAM-B "<<i+2<<endl; break; }
      }
        if(a==b) cout<<"TIE"<<endl;
    }
    else{
      int a1=0, b1=0,flag=0;
      int balla = 0, ballb = 0;
      for( int i = 0; i < 10; i++){
        if(i%2 == 0){
          if(s[i] == '1') a1++;
        balla++;
        if(a1 + 5-balla < b1) {cout<<"TEAM-B "<<i+1<<endl; flag=1; break; }
        }
        else{
          if(s[i] == '1') b1++;
         ballb++;
          if(b1 + 5-ballb < a1) {cout<<"TEAM-A "<<i+1<<endl; flag=1; break; }
        }
      }
          if(flag==0)
            if(a>b) cout<<"TEAM-A "<<10<<endl;
            else cout<<"TEAM-B "<<10<<endl;
      

    }
  }
}

