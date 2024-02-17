#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n,d;
cin>>n>>d;
vector<string>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int c1=0,maxi=0;
for(int i=0;i<d;i++)
{  int c=0;
    for(int j=0;j<n;j++)
    {
        if(a[j][i]=='o')
        {
            c++;
        }
    }
    if(c==n)
    {
       c1++;
    }
    else{
        maxi=max(maxi,c1);
        c1=0;
    }
}
maxi=max(maxi,c1);
cout<<maxi<<endl;
    return 0;
}