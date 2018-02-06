#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,f=0;
cin>>n;
 

f=f+n/5;

n=n-(n/5)*5;
if(n!=0)
cout<<f+1;
else
cout<<f;
return 0;
}
