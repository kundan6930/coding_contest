#include <bits/stdc++.h>
using namespace std;
using ll=long long;
double mod=1e14;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<pair<int,int>>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i].first;
    cin>>a[i].second;
}
vector<double>b;
for(int i=0;i<n-1;i++)
{
    double x1=(double)a[i].first;
    double x2=(double)a[i+1].first;
    double y1=(double)a[i].second;
    double y2=(double)a[i+1].second;
    double d1=x1-x2;
    double d2=y1-y2;
    double k=sqrt((d1*d1)+(d2*d2));
    cout<<k<<endl;
    b.push_back(k);
}
sort(b.begin(),b.end());
reverse(b.begin(),b.end());
double ans=(double)0;
for(int i=1;i<n;i++)
{
   if(i<=40)
   {
      double k1=(double)pow(2, i-1);
      if(b[i]<=k1)
      {
        ans+=b[i];
      }
   }
   else
   {
      ans+=b[i];
   }
  
}
cout<<ans<<endl;
    return 0;
}