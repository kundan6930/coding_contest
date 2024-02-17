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
    string s;
    cin>>s;
    vector<int>a,b;
    a.push_back(0);
    b.push_back(0);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            b.push_back(i+1);
        }
        else{
           a.push_back(i+1); 
        }
    }
     a.push_back(n+1); 
     b.push_back(n+1);
     int f=0,f1=0; 
     if(a.size()>2)
     {
     for(int i=0;i<a.size()-1;i++)
     {
        int k=a[i];
        int k1=a[i+1];
        if((k1-k-1)%2==1)
        {
            f=1;
            break;
        }
     }
     }
     if(b.size()>2)
     {
     for(int i=0;i<b.size()-1;i++)
     {
        int k=b[i];
        int k1=b[i+1];
        if((k1-k-1)%2==1)
        {
            f1=1;
            break;
        }
     }
     }
     if(f==1 && f1==1)
     {
        cout<<"No"<<endl;
     }
     else{
        cout<<"Yes"<<endl;
     }

}
    return 0;
}