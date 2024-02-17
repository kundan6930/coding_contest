#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int k,g,m;
cin>>k>>g>>m;
int g1=0;
int m1=0;
int i=0;
while(i<k)
{
    if(g1==g)
    {
        g1=0;
    }
    else if(m1==0)
    {
        m1=m;
    }
    else{
        g1+=min(m1,g);
        m1-=min(m1,g);
    }
    i++;
}
cout<<g1<<" "<<m1<<endl;
    return 0;
}