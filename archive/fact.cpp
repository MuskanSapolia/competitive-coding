#include<bits/stdc++.h>
using namespace std;
vector<int> fact(int n)
{
  vector<int>factors;
  for(int i=1;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
     factors.push_back(i);
     if(i!=n/i)
       factors.push_back(n/i);
    }
  }
  return factors;
}
int main()
{
  int n;
  cin>>n;
  vector<int>factors;
  factors = fact(n);
 for(int facts:factors)
  cout<<facts<<" ";
 cerr<<endl;
 for(int i=0;i<factors.size();i++)
   cerr<<factors[i]<<" ";
 cerr<<endl;
 if(factors.size()==2)
   cout<<"Prime";
return 0; 
}
