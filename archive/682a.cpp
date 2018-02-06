#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,m,c=0,i,j;
	cin>>n>>m;
	long d=0,f=0;
	long a[5],b[5];
	for(i=0;i<=4;i++)
	 {d=0;
		for(j=1;j<=n;j++)
		{
			if(j%5==i)
				d++;
		}
		
		a[i]=d;
	cerr<<i<<" "<<d<<endl;
	}
	for(i=0;i<=4;i++)
	{c=0;
		for(j=1;j<=m;j++)
		{
			if(j%5==i)
				c++;
		}
		b[i]=c;
		cerr<<i<<" "<<c<<endl;
	}
	f=a[0]*b[0];
for(i=1;i<=4;i++)
{
	f=f+a[i]*b[5-i];
}
cout<<f;
	
	return 0;
}
