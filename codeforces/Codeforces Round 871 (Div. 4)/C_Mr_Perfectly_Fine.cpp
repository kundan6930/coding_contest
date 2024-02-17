#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int maxi=1e6;
    int maxi1=1e6,maxi2=1e6;int f1=-1,f2=-1;
    for(int i=0;i<n;i++)
    { int a;string s;
        cin>>a;
        cin>>s;
       if(s[0]=='1'&& s[1]=='1')
       {
           maxi=min(maxi,a);
       }
        else
        { 
            if(s[0]=='1')
        {
            if(a<maxi1)
           {
            maxi1=a;
            f1=i;
           }
        }
        if(s[1]=='1')
        {
           if(a<maxi2)
           {
            maxi2=a;
            f2=i;
           }
            
        }
        maxi=min(maxi,maxi1+maxi2);
        }
        // cout<<a<<" "<<s[0]<<" "<<s[1]<<" "<<maxi1<<" "<<maxi2<<endl;
    }
    if(maxi==1e6 )
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<maxi<<endl;
    }

}
    return 0;
}