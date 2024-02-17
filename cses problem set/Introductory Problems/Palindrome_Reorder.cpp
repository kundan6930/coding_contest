#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
    string s;
    cin>>s;
    vector<int>a(26,0);
    int n=s.length();
    for(int i=0;i<n;i++ )
    {
        a[s[i]-'A']++;
    }
    int o=0,e=0;
    for(int i=0;i<26;i++ )
    {
        if(a[i]%2!=0)
        {
            o++;
        }
    }
    vector<char>ans(n);
    if(o>1)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {   
        int i1=0,j=n-1;
        for(int i=0;i<26;i++)
        {
          int k=a[i];
            while(k>0)
            {
                if(k==1)
                {
                    ans[n/2]=i+'A';
                    k--;
                }
                else
                {
                ans[i1++]=i+'A';
                ans[j--]=i+'A';
                  k-=2;
                }
            }
          }
        
        for(int i=0;i<n;i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}