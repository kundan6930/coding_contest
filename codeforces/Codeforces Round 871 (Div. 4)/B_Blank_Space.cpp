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
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int c=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
        else{
            maxi=max(maxi,c);
            c=0;
        }
    }
    maxi=max(maxi,c);
    cout<<maxi<<endl;
}
    return 0;
}