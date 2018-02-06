#include<bits/stdc++.h>
using namespace std;
int main()
{
	int u=0;
	int n,m;
	cin>>n>>m;
	int i=0,s=0;
	int a[n];
        int p=n;
	while(p--)
	{cin>>a[i];
		i++;
	}
	sort(a,a+n);
	for(i=0;i<m;i++)
	{
		if(a[i]<=0)
			s=s+a[i];
else
u=u+a[i];
	}
	s=fabs(s);

int k=s-u;
if(s>k)
cout<<s;
else
cout<<k;

	return 0;
}
