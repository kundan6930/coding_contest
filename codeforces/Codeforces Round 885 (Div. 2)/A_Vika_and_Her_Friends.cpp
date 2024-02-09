#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m,k;
    cin>>n>>m>>k;
    int x,y;
    cin>>x>>y;
    int f=0;
    for(int i=0;i<k;i++)
    {
        int x1,y1;
        cin>>x1>>y1;
        if((abs(x-x1)+abs(y-y1))%2==0)
        {
            f=1;
        }
    }

    
        if(f==1)
        {
          cout<<"NO"<<endl; 
        }
        else{
            cout<<"YES"<<endl;
        }
   

}
    return 0;
}