#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
  vector<long long>v;
  vector<long long>v1;
  long long n;
  cin>>n;
  long long a[n];
  for(long long i=0;i<n;i++)
    cin>>a[i];
  for(long long i=1;i<n;i++)
    a[i]=a[i-1]+a[i];
  if(a[n-1]%3!=0)
    cout<<0;
  else
  {
    long long k=a[n-1]/3;
   for(long long i=0;i<n;i++)
     {  if(a[i]==k && i != n-1)
       v.push_back(i);
       if(a[i]==k*2 && i !=n-1 && i != 0)
       v1.push_back(i);
     }
   long long ans=0,pos,p;
   vector<long long>::iterator u;
   for(long long i=0;i<v.size();i++)
   {
     u=upper_bound(v1.begin(),v1.end(),v[i]);

     pos=u-v1.begin();
     p=v1.size()-pos;
     ans=ans+p;
  }
    cout<<ans<<endl;
  }
  return 0;
}
