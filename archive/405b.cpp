#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int i = 0;
  while(i<s.length())
  {
    if (s[i]=='L')
    {
     int j = i-1;
      while (j >=0)
      {
        s[j] = 'L';
        j-=1;
      }
      i+=1;
    }
    else if(s[i] == 'R')
    {
        int j = i+1;
        while (s[j]!='L' && j<s.length())
           j+=1;
        if (s[j] == 'L')
          {
            int l = j-i+1;
            int mid = (i+j)/2;
            for(int x = i+1;x<=mid;x++)
            s[x] = 'R';
            for(int x= mid+1;x<j;x++)
            s[x] = 'L';
            if (l%2 != 0)
            s[mid] = '.';
            i=j+1;
          }
    
        else
        {
          for(int x = i+1;x<s.length();x++) 
            s[x] = 'R';
            i=s.length();
        }
    }
    else
      i+=1;
  }
      
int count = 0;
for(int i =0;i<s.length();i++)
{
  if (s[i] == '.')
  {
    count +=1;
  }
}
cout<<count;
 
 return 0;            
}
