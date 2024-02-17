#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
string s;
cin>>s;
int n=s.length();
stack<char>st;
int i=0;
if(n<=2)
{
    cout<<s<<endl;
}
else
{
while(i<n )
{
    st.push(s[i]);
     string s1;
     char a,b,c;
     int f=0;
    if(st.size()>2)
    {
        f=1;
        a=st.top();
          st.pop();
         b=st.top();
          st.pop();
         c=st.top();
          st.pop(); 
          s1+=c;
          s1+=b;
          s1+=a;
    }
   
  //  cout<<s1<<" "<<i<<endl;
    while( s1=="ABC" )
    {
          //  cout<<s1<<"&"<<endl;
      // st.push(b);
      // st.push(a);
       if(st.size()<=2)
       {
         f=2;
         break;
       }
       else
       {
        f=3;
         s1.clear();
           a=st.top();
          st.pop();
         b=st.top();
          st.pop();
         c=st.top();
          st.pop(); 
          s1+=c;
          s1+=b;
          s1+=a;  
       }
   
    }
    if(f==1 || f==3)
    {
        st.push(c);
       st.push(b);
       st.push(a);  
    }
    i++;
}
 string ans;
 while(!st.empty())
 {
    ans+=st.top();
    st.pop();
 }
 reverse(ans.begin(),ans.end());
 cout<<ans<<endl;
}
    return 0;
}