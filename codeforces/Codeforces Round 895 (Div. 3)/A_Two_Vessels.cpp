#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int a,b,c;
    cin>>a>>b>>c;
    int k=(max(a,b)-min(a,b))/(2*c);
    int k1=(max(a,b)-min(a,b))%(2*c);
    if(k1==0)
    {
        cout<<k<<endl;
    }
    else{
      cout<<k+1<<endl;
    }
    
}
    return 0;
}