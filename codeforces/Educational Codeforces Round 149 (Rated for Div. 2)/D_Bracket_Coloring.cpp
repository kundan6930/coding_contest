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
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            a++;
        }
        else
        {
          b++;
        }
    }
    if(a!=b)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int c[n];
        int i=0,j=n-1;
        while(i<j)
        {
      if(s[i]=='(' && s[j]=='(')
      {
        c[i]=1;
        c[j]=2; 
        i++;
        j--;
      }
      else if(s[i]==')' && s[j]==')')
      {
        c[i]=2;
        c[j]=1; 
        i++;
        j--;
      }
      else if(s[i]=='(' && s[j]==')')
      {
        c[i]=1;
        c[j]=1; 
        i++;
        j--;
      }
      else{
        c[i]=1;
        c[j]=1; 
        i++;
        j--;
      }
        }
    vector<int>ct(3);
    for(int i=0;i<n;i++)
    {
        ct[c[i]]++;
    }
    if(ct[1]==0 || ct[2]==0)
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<"2"<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    }
   
}
    return 0;
}