#include<bits/stdc++.h>
using namespace std;


long long fibo(int t1,int t2,int n)
{ long long f[n+1];
  f[0]=t1;
  f[1]=t2;
 for(int i=2;i<n;i++)
   f[i]=f[i-2]+f[i-1]*f[i-1];
 return f[n-1];
}
int main()
{
  int t1,t2,n;
  cin>>t1>>t2>>n;
printf("%0.ll", fibo(t1,t2,n));


return 0;
}
