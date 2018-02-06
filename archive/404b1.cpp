#include<bits/stdc++.h>
using namespace std;
int main()
{
  double a,d;
  int n;
  cin>>a>>d;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    int c = (i*d)/(4*a);
    double l = (i*d)-(c*4*a);
    if(l>=0 && l<a)
      printf("%.10f% .10f\n",l,0.0);
    if(l>=a && l<2*a)
      printf("%.10f% .10f\n",a,l-a);
    if(l>=2*a && l<=3*a)
     printf("%.10f% .10f\n",(3*a)-l,a);

    else
      printf("%.10f% .10f\n",0.0,(4*a)-l);
  }
  return 0;
}
