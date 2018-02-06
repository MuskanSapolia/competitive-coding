#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int i=n*m,c=0;

while(n>0&&m>0)
{
n--;
m--;
c++;
}
if(c%2==0)

cout<<"Malvika";
else 
cout<<"Akshat";
return 0;
}
