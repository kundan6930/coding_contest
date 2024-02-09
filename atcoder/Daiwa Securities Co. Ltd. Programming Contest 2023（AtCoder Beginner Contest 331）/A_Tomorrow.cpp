#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int a,b;
cin>>a>>b;
int y,m,d;
cin>>y>>m>>d;
int d1,m1,y1;
int c=0;
if(d==b)
{
   d1=1;
   c=1;
}
else{
    d1=d+1;
}
int c1=0;
if(c+m>a)
{
   m1=1;
   c1=1;
}
else{
    m1=m+c;
}
y1=y+c1;
cout<<y1<<" "<<m1<<" "<<d1<<endl;
    return 0;
}