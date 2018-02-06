#include<bits/stdc++.h>
using namespace std;
int main()

{
  int t,x1,y1,x2,y2;
  cin>>t;
  while(t--)
  {
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
      if(y1<y2)
        cout<<"up"<<endl;
      else
        cout<<"down"<<endl;
    }
    else if(y1==y2)
    {
      if(x1<x2)
        cout<<"right"<<endl;
      else
        cout<<"left"<<endl;
    }
    else
      cout<<"sad"<<endl;
  }
  return 0;
}
