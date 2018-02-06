#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int t=(k*l)/nl;
int s=c*d;
int a=p/np;
if(t<=s&&t<=a)
cout<<t/n;
else if(s<t&&s<a)
cout<<s/n;
else
cout<<a/n;
return 0;
}
