#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b,k,temp;
  long long count=0;
  cin>>a>>b;
  while(b>0)
  {
    
    k=a/b;
    count+=k;
    a = a-(b*k);
    if(b>a)
    {
      temp = a;
      a = b;
      b = temp;
    }
  }
  cout<<count;
  return 0;
}

