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
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
   
    int i=0,j=n-1;
    while(i<n && a[i]==b[i])
    {
        i++;
    }
     while(j>=0 && a[j]==b[j])
    {
        j--;
    }
    if(i>j)
    {
        cout<<"1"<<" "<<n<<endl;
    }
    else
    {
    while(j!=0)
    {
        if(b[j]>=b[j-1])
        {
           j--;
        }
        else{
            break;
        }
    }
    while(i!=n-1)
    {
        if(b[i]<=b[i+1])
        {
           i++;
        }
        else{
            break;
        }
    }
    cout<<j+1<<" "<<i+1<<endl;
    }
}
    return 0;
}