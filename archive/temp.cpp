#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  double a,d; cin>>a>>d;
  ll n; cin>>n;
  for(ll i = 1;i<=n;i++)
  {
    ll c = (i*d)/(4.0*a);
    double l = i*d - c*4*a;
    if(l>=0&&l<a) printf("%0.10lf 0\n",l);
    else if(l>=a&&l<2*a)l-=a, printf("%0.10lf %0.10lf\n",a,l);
    else if(l>=2*a&&l<3*a ) l-=2*a, printf("%0.10lf %0.10lf\n",a-l,a);
    else l-=3*a,printf("0 %0.10lf\n",a-l);
  }
  return 0;
}
