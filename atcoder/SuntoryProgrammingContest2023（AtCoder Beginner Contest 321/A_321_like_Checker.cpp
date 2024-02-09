#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int n1=n;
vector<int>a;
while(n1>0)
{
    a.push_back(n1%10);
    n1/=10;
}
int f=0;
for(int i=0;i<a.size()-1;i++)
{
    if(a[i+1]<=a[i])
    {
       f=1;
       break;   
    }
}
if(f==1)
{
    cout<<"No"<<endl;
}
else
{
    cout<<"Yes"<<endl; 
}
    return 0;
}