#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int a[n];
    int o=0,z=0,m=0,g=0;
    for(int i=0;i<n;i++)
    { cin>>a[i];
      if(a[i]==1) o++;
      else if(a[i]==0) z++;
      else if(a[i]==-1) m++;
      else g++;
    }
    if(g>1) cout<<"no"<<endl;
    else if(n==1) cout<<"yes"<<endl;
    else if(m>=2 && o==0) cout<<"no"<<endl;
    else if(g>=1 && m>=1) cout<<"no"<<endl;
    else
      cout<<"yes"<<endl;

  }
  return 0;
}
