#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
char s[n];
s[0]=0;
int i=1;
while(i<=n)
{
i++;
s[i]=i;
}
i=1;
while(s[i]!='\0')
{
if(i==n)
cout<<s[i];
i++;
}

return 0;
}
