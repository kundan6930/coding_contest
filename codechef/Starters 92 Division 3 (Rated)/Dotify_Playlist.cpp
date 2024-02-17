#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k,l;
    cin>>n>>k>>l;
    int a[n][2];
    int c=0;
    vector<int>b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0];
        cin>>a[i][1];
        if(a[i][1]==l)
        {
            c++;
            b.push_back(a[i][0]);
        }
    }
    sort(b.begin(),b.end(),greater<int>());
    if(c<k)
    {
        cout<<"-1"<<endl;
    }
    else{
        int s=0,i=0;
        while(k>0)
        {
           s+=b[i];
           i++;
           k--;
        }
        cout<<s<<endl;
    }
}
    return 0;
}