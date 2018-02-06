#include<bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

bool comp(const pii& i,const pii& j)
{
  if(i.second == j.second) return i.first < j.first;
  return i.second<j.second;

}
int main()
{
  int t,
      x,y,k;
  cin>>t;
  while(t--)
  {
     cin>>k;
     pii a[k];
     int i=0;
     int c=1;
     while(i<k)
     {
       cin>>x>>y;
  a[i]={x,y};
       i++;
     }
       sort(a,a+k,comp);
    int j=0;
     for(int m=1;m<k;m++)
     {
       if(a[m].first>=a[j].second)
       { c++;
         j=m;
       }
     }
   cout<<c<<endl;

}
return 0;
}
