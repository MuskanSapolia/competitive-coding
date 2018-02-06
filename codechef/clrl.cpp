#include<bits/stdc++.h>
using namespace std;
int  main(){
  int t;
  cin>>t;
  while(t--){
    int n,u;
    cin>>n>>u;
    long long  a[n];
    int flag=1;
    for(int i=0;i<n;i++)
      cin>>a[i];
    int l=0,r=1e9+1;
    for(int i=0;i<n;i++){
      if(a[i]>r || a[i]<l){
        flag=0;
        break;
    }
    else{
    if(a[i+1]<a[i])
      r=a[i];
    else
      l=a[i];
    }
  }
    if(flag==0)
      cout<<"NO"<<endl;
    else
      cout<<"YES"<<endl;
  }
}
