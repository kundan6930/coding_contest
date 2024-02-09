#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 vector<int>a(8),b(8);
for(int i=0;i<8;i++)
{
    cin>>a[i];
    b[i]=a[i];
}
sort(b.begin(),b.end());
int f=0;
for(int i=0;i<8;i++)
{
    if(a[i]==b[i] && a[i]>=100 && a[i]<=675 && a[i]%25==0)
    {
        
    }
    else{
        f=1;
        break;
    }
}
if(f==1)
{
    cout<<"No"<<endl;
}
else{
    cout<<"Yes"<<endl;
}
    return 0;
}