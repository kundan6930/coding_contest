#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int a,b;
cin>>a>>b;
if((a==3 && b==4)||(a==6 && b==7))
{
    cout<<"No"<<endl;
}
else if(abs(a-b)==1)
{
cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
    return 0;
}