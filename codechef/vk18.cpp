#include<iostream>
using namespace std;

int main(){
  int t,n,even,odd,sum,room;
  cin>>t;
  while(t--){
    cin>>n;
    sum = 0;
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= i; j++){
        even = 0, odd =  0;
        room = i+j;
        while(room > 0){
          int r = room%10;
          room = room/10;
          if(r%2 == 0)
            even += r;
          else
            odd += r;
        }
        if(i == j)
        sum += abs(even-odd);
        else
          sum += 2*abs(even-odd);
      }
    }
    cout<<sum<<endl;

  }
}
