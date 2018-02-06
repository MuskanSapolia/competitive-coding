#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,p,i=0,n;
	cin>>n;
	pair<int,int> a[n];
	p=n;
	while(p--)
	{	
     cin>>x;
		a[i] = {x,i};
		i++;
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	cout<<a[i].first<<" "<<a[i].second<<endl;
 for(int i=0;i<n/2;i++)
 {
		cout<<a[i].second+1<<" "<<a[n-i-1].second+1<<endl;
		
 }
	return 0;
}
