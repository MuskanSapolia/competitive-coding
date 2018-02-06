#include<bits/stdc++.h>
using namespace std;
int main()
{

  double l;
    int n;
  cin>>n>>l;
  double a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
 sort(a,a+n);
double k=0.0;
  k=double(a[0])-0.0;
  
double h=0.0;
h=double(l)-double(a[n-1]);


double p=0.0;
for(int i=0;i<n-1;i++)
{ if((a[i+1]-a[i])>p)
    p=a[i+1]-a[i];
}
p=p/2;
double u=max(p,max(h,k));

printf("%.10lf",u);

  return 0;
}
