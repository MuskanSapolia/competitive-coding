nclude<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
      cin>>n;
        int a[n],b[n-1],c[n-2];
          for(int i=0;i<n;i++) cin>>a[i]; 
            for(int i=0;i<n-1;i++) cin>>b[i];
              for(int i=0;i<n-2;i++) cin>>c[i];
                multiset<int> d(a,a+n),e(b,b+(n-1)),f(c,c+(n-2));
                    vector<int>v(2);
                        set_difference(d.begin(),d.end(),e.begin(),e.end(),v.begin());
                            set_difference(e.begin(),e.end(),f.begin(),f.end(),v.begin()+1);
                                for(int v: v) cout<<v<<endl;
                                    return 0;
}


