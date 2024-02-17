#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
        int n;
        cin>>n;
        string s;
        cin>>s;
     map<char,int>m1,m2;
     int maxi=0;
     for(int i=0;i<n;i++)
     {
        m2[s[i]]++;
        
     }
     int n1=m1.size();
     int n2=m2.size();
     maxi=max(maxi,n1+n2);
     for(int i=0;i<n;i++)
     {
        m1[s[i]]++;
        m2[s[i]]--;
        if(m2[s[i]]<=0)
        {
            m2.erase(s[i]);
        }
        int n1=m1.size();
        int n2=m2.size();
        
         maxi=max(maxi,n1+n2);
         //cout<<n1<<" "<<n2<<" "<<maxi<<endl;
     }
     
     cout<<maxi<<endl;


        
    }
    return 0;
    }