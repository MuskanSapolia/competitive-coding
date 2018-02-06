#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
int i=0;
int c=0;
while(i<n)
{
  if(a[i]==1)
    c++;
  else
  {
    for(int j=i+1;j<n;j++)
    {
      if(a[j]==1)
        c++;
      else
      {
        break;
        i++;
    }
  }
}
cout<<c;
  return 0;
}
