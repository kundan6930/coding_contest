#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int x,y;
cin>>x>>y;
if(y-x<=2 && y-x>=0)
{
      cout<<"Yes"<<endl;
}
else if(x-y<=3 && x-y>=0)
{
    cout<<"Yes"<<endl;
}
else{
        cout<<"No"<<endl;
}

    return 0;
}