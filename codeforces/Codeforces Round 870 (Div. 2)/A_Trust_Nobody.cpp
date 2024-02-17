#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>a(n);
   //map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       // m[a[i]]++;
        
    }
    int maxi=0,flag=0;
    for(int i=1;i<=n;i++)
    {   int f=0,t=0;
        for(int j=0;j<n;j++)
        {
              if(a[j]<=i)
            {
                 t++;
            }
      else
      {
        f++;
      }
        }
        if(f<=i)
        {
            flag=1;
            maxi=max(maxi,f);
        }
    }
    if(maxi==0 && flag==0)
    {
        cout<<"-1"<<endl;
    }
    else{
      cout<<maxi<<endl;
    }
    

}
    return 0;
}