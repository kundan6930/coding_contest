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
    int n;
    cin>>n;
    int s=0,c=0;
    for(int i=0;i<n;i++)
    {
       int a;
       cin>>a;
       s=s^a; 
       if(a==0)
       {
        c++;
       }
    }
    if(s==0 && c==n)
    {
        cout<<"0"<<endl;
    }
    else if(s==0)
    {
        cout<<"1"<<endl<<"1"<<" "<<n<<endl;
    }
    else if(n%2==0)
    {
        cout<<"2"<<endl<<"1"<<" "<<n<<endl<<"1"<<" "<<n<<endl; ;  
    }
    else{
        cout<<5<<endl;
    cout<<1<<" "<<n<<endl<<1<<" "<<2<<endl<<2<<" "<<3<<endl<<2<<" "<<3<<endl<<3<<" "<<n<<endl;
    }
}
    return 0;
}