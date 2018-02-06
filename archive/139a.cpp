#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int s=0;
  cin>>n;
  int a[7];
  int i=0;
  while(i<7)
  {
    cin>>a[i];
    i++;
  }
 
 while(s<n)
 {
   i=0;
   while(i<7)
   {
     s=s+a[i];
     if(s>=n)
     {  
       cout<<i+1;
       break;
     }
     i++;
   }
 }
  return 0;
}

