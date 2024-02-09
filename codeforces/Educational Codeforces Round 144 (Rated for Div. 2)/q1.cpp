#include <bits/stdc++.h>
using namespace std;
string s2="FBFFBFFBFBFFBFFBFBFFBFFB";
int solve(string s1)
{
    if (s2.find(s1) != string::npos)
    {
        return s2.find(s1);
    }
    return -1;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      int k;
      cin>>k;
      string s1;
      cin>>s1;
      if(solve(s1)!=-1)
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