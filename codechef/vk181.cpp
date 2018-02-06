#include<iostream>
using namespace std;
const int N = 3e6+1;
int arr[N];
int b[N];

int main(){
  long long t,n,even,odd,sum;
  cin>>t;
    for(long long i = 2 ; i <= N+1; i++){
      even = 0, odd = 0;
      long long room = i;
      while(room > 0){
        long long r = room%10;
        room = room/10;
        if(r%2 == 0)
          even += r;
        else odd += r;
      }
      arr[i] = abs(even-odd);
    }
    cerr<<"out of loop 1"<<endl;
    for(int i = 0; i < N; i++)
      b[i] =  0;
    cerr<<"out of loop2"<<endl;

    for(int i = 1; i < N; i++){
      b[i] = b[i-1] + arr[2*i];
      for( int j = i+1; j < 2*i; j++)
       b[i] += arr[j]; 
    }
    cerr<<"out of loop 3"<<endl;

    while(t--){
      cin>>n;
      cout<<b[n]<<endl;
    }
  }


