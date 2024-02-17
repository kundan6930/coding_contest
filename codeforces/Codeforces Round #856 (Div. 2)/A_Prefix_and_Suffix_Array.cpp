#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      int n;
      cin>>n;
      
      int k=2*n-2;
      vector<string>s(k);
      for(int i=0;i<k;i++)
      { 
        cin>>s[i];
        
      }
      vector<string>str;
      for(int i=0;i<k;i++)
      { 
        if(s[i].length()==n-1)
        {
            str.push_back(s[i]);
        }
    }
      /*if(n==1)
      {
        cout<<"yes"<<endl;
      }
      else if(n==2)
      {
        if(str[0]==str[1])
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
      }
      else
      {*/
     string s1=str[0];
      string s2=str[1];
      string ans;
      if(s1.substr(1)!=s2.substr(0,n-2))
      {
        swap(s1,s2);
      }
      ans=s1+s2[n-2];
      string ans1=ans;
       reverse(ans1.begin(),ans1.end());
       if(ans==ans1)
       {
        cout<<"yes"<<endl;
       }
       else
       {
        cout<<"no"<<endl;
       }
      
        
    }
    return 0;
    }