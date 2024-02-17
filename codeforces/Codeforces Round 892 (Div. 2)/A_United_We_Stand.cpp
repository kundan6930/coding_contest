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
    vector<int>a(n);
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    if(m.size()==1)
    {
        cout<<"-1"<<endl;
    }
    else{
        vector<int>a,b;
        int c=0;
        for(auto i:m)
        {
            int k=i.second;
            
            while(k>0)
            {
                if(c<1)
                {
                a.push_back(i.first);
                }
                else{
                  b.push_back(i.first);
                }
                k--;
            }
            c++;
        }
        cout<<a.size()<<" "<<b.size()<<endl;
        for(int i=0;i<a.size();i++)
        {
          cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<b.size();i++)
        {
          cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}
    return 0;
}