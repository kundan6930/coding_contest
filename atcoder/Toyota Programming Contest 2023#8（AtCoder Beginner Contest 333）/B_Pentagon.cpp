#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
char a,b,c,d;
cin>>a>>b;
cin>>c>>d;
int k=abs((a-'A')-(b-'A'));
int k1=abs((c-'A')-(d-'A'));
if(k>2)
{
    k=5-k;
}
if(k==k1)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl; 
}


    return 0;
}