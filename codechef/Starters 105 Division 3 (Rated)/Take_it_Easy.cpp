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
    vector<int>a(n);
    int e=0,o=0;
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            e++;
        }
       else
       {
          o++;
       }
       s+=a[i];
    }
    if(s%n!=0)
    {
        cout<<"No"<<endl;
    }
    else{
        int k=s/n;
        if(k%2==0)
        {
            if(e==n)
            {
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }

        }
        else{
if(o==n)
            {
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
       
}
    return 0;
}