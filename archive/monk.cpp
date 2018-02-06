#include <bits/stdc++.h>
using namespace std;
int top =-1;
int stack1[100000];
int top1(int stack1[])
{
      return stack1[top];
}
int main()
{
  int q;
  string s;
  while(q--)
  {
      cin>>s;
      if(s.length()==1)
      {
        if(top==-1)
        cout<<"No Food"<<endl;
        else
        cout<<top1(stack1)<<endl;
      }
      if(s.length()>1)
      {
        top= top+1;
        stack1[top]=s[2];
      }
  }
return 0;
}
