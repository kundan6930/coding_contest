#include <bits/stdc++.h>
using namespace std;
using ll=long long;
string ans;
 bool isvalid(string s) {
       stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' )
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()!='(')
                {
                    return false;
                }
                st.pop();
            }
        }
        if(!st.empty())
        {
            return false;
        }
        return true;
 }
int n ;
bool solve(int pos, string &s,char p,string &s1)
{
    if(pos==n)
    {
      if(isvalid(s1))
      {
          ans=s1;
        return true;
       
      }
      return false;
    }
    bool a=true,b=true,c=true;
    if(s[pos]!=p)
    {   
        s1+='(';
        a=solve(pos+1,s,s[pos],s1);
        s1.pop_back();
        s1+=')';
        b=solve(pos+1,s,s[pos],s1);
        s1.pop_back();
        return a|b;
    }
    else{
        s1+=s1.back();
        c=solve(pos+1,s,s[pos],s1);
        s1.pop_back();
        return c;
    }
}
int main (){
int t;
cin>>t;
while(t--)
{
    ans="";
    cin>>n;
    string s;
    cin>>s;
    string s1;
   bool k=solve(0,s,'A',s1);
   if(k)
   {
     cout<<"YES"<<endl;
     cout<<ans<<endl;
   }
   else{
   cout<<"NO"<<endl;
   }
}
    return 0;
}