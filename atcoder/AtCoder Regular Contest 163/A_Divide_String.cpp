#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool solve(string s1, string s2) {
  int n1 = s1.length(), n2 = s2.length();
  for (int i = 0; i < min(n1, n2); i++) {
    if (s1[i] < s2[i]) return true;
    if (s1[i] > s2[i]) return false;
  }
  return n1 < n2;
}
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
//    
int f=0;
for(int i=1;i<n;i++)
{
    string l=s.substr(0,i);
    string r=s.substr(i,n-i);
     if(solve(l,r))
     {
        f=1;
        break;
     }
}
if(f==1)
{
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
    return 0;
}