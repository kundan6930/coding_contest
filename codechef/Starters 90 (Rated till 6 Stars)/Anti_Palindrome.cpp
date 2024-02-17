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
    vector<int>a(26);
    for(int i=0;i<n;i++)
    {
        a[s[i]-'a']++;
    }
    int e=0,o=0,c=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
       if(a[i]%2==0)
       {
         e++;
       }
       else
       {
         o++;
       }
        }
        else
        {
            c++;
        }
    }
    if(o>1)
    {
        cout<<"0"<<endl;
    }
   else if(o==0 && e==1)
    {
        cout<<"1"<<endl;
    }
    else if(o==0 && e>1)
    {
        if(c>0)
        {
         cout<<"1"<<endl;
        }
        else
        {
             cout<<"2"<<endl;
        }
    }
    else if(o==1 && e==0)
    {
        cout<<"2"<<endl;
    }
    else if(o==1)
    {
        if(c>0)
        {
            cout<<"1"<<endl;
        }
        else{
        cout<<"2"<<endl;
        }
    }

}
    return 0;
}