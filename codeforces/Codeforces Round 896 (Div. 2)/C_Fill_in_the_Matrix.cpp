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
    int n, m;
    cin>>n>>m;
    vector<int>a;
    for(int i=1;i<m;i++)
    {
        a.push_back(i);
    }
    a.push_back(0);
    int c=0;
    if(m==1)
    {
        cout<<"0"<<endl;
    }
    else if(n>=m-1)
    {
        cout<<m<<endl;
    }
    else{
        cout<<n+1<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a.size();j++)
        {
           cout<<a[(j+c)%m]<<" ";
        }
        cout<<endl;
        c++;
        if(c>=m-1)
        {
            c=0;
        }
    }

}
    return 0;
}