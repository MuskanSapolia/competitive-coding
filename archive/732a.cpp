#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l=0;
cin>>n;
char s[100];
while(n--)
{l=0;
cin>>s;
int i=0;
while(s[i]!='\0')
{
l++;
i++;
}
if(l>10)
cout<<s[0]<<l-2<<s[l-1]<<endl;
else
cout<<s;
}
return 0;
}
