#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve( vector<int>&b,int k,int s1)
{ 
   sort(b.begin(),b.end(),greater<int>());
   int i=0,sum=0;
   while(k>0)
   {
      sum+=b[i];
      i++;
      k--;
   }
   if(sum>=s1)
   {
      return 1;
   }
   return 0;
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
//cout<<n<<" "<<m<<endl;
vector<int>a(m);
for(int i=0;i<m;i++)
{
    cin>>a[i];
}
vector<int>b(n);
vector<string>c(n);
int maxi=0;
for(int i=0;i<n;i++)
{
    cin>>c[i];
    //cout<<c[i]<<endl;
    int sum=0;
    for(int j=0;j<(int)c[i].length();j++)
    {
         if(c[i][j]=='o')
         {
            sum+=a[j];
         }
    }
    sum+=(i+1);
    b[i]=sum;
    maxi=max(maxi,sum);
  //  cout<<maxi<<" "<<sum<<endl;
}
for(int i=0;i<n;i++)
{
    string s=c[i];
    int s1=maxi-b[i];
    //cout<<s<<" "<<s1<<endl;
    vector<int>bb;
   for(int j=0;j<(int)s.length();j++)
   {
     if(s[j]=='x')
     {
        bb.push_back(a[j]);
      //  cout<<j<<" "<<a[j]<<endl;
     }
   }
   int st=0,en=bb.size();
   int ans=-1;
   while(st<=en)
   {
      int mid=(st+en)/2;
    //  cout<<mid<<" "<<solve(bb, mid,s1)<<endl;
      if(solve(bb, mid,s1))
      {
        ans=mid;
        en=mid-1;
      }
      else{
        st=mid+1;
      }
   }
   cout<<ans<<" "<<endl;
}
    return 0;
}