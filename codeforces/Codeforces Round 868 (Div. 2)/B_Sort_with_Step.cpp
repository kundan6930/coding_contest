#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-(i+1))%k!=0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"0"<<endl;
    }
    else if(c==2)
    {
        cout<<"1"<<endl;
    }
    else
    {
       cout<<"-1"<<endl;
    }

}
    return 0;
}