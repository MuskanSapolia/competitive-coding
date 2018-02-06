#include<bits/stdc++.h>
using namespace std;
char s[30];
void swap(char *p,char *q)  
{
  char temp=*p;
  *p=*q;
 *q=temp;
}
int per(char *a,int l,int h)
{
  
   int count =0;
  if(l==h)
  {
    count++;
  if(a==s)
    cout<<count;
    return count;
  }
  else
  {
    for(int i=l; i<=h; i++)
    {
      if(a+l!=a+i)
      swap(a+l,a+i);
      per(a,l+1,h);
      swap(a+l,a+i);
    }
  }
}

int main()
{
 
  cin>>s;
  while(s!="#")
  {
    int i=0;int l=0;
    while(s[i]!='\0')
    {
      l++;
      i++;
    }
    per(s,0,l-1);
  
    cin>>s;
  }
  return 0;
}

