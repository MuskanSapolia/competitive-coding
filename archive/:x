#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    int i=0;
    int c=0;
    while(i<n)
  {
      if(a[i]==0)
        i++;
      else
      {
        c++;
        j=i+1;
      while(j<n)
      {
          if(a[j]==0)
          {
            c++;
            i=j+1;
            break;
          }
        else
        {
          a[j]=0;
          c++;
          j++;
        }
      }
    }
    }
    cout<<c;
            return 0;
}
