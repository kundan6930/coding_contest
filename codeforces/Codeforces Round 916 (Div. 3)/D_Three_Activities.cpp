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
    vector<pair<int,int>>a(n),b(n),c(n),d(n);
    for(int i=0;i<n;i++)
    {
        int c1;
        cin>>c1;
        a[i]={c1,i};
    }
    for(int i=0;i<n;i++)
    {
        int c1;
        cin>>c1;
        b[i]={c1,i};
    }
    for(int i=0;i<n;i++)
    {
        int c1;
        cin>>c1;
        c[i]={c1,i};
    }
    sort(a.begin(),a.end(),greater<pair<int,int>>());
    sort(b.begin(),b.end(),greater<pair<int,int>>());
    sort(c.begin(),c.end(),greater<pair<int,int>>());
    vector<pair<int,int>>a1(3),b1(3),c11(3);
    for(int i=0;i<3;i++)
    {
        a1[i]=a[i];
        b1[i]=b[i];
        c11[i]=c[i];
    }
    int maxi=0;
    for(int i=0;i<3;i++)
    {
        pair<int,int>p1=a1[i];
        for(int j=0;j<3;j++)
        {
              pair<int,int>p2=b1[j];
              if(p1.second!=p2.second)
              {
            for(int k=0;k<3;k++)
            {
                pair<int,int>p3=c11[k]; 
                if((p2.second!=p3.second) && (p1.second!=p3.second))
                {
                    maxi=max(maxi,p1.first+p2.first+p3.first);
                }

            }
              }
        }
    }
    cout<<maxi<<endl;
}
    return 0;
}