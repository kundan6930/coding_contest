#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int> solve(int n)
{
   vector<int>a;
   while(n>0)
   {
   a.push_back(n%10);
   n/=10;
   }
   sort(a.begin(),a.end());
   return a;
}
int nextNumber(int n){
        int newNumber = 0;
        while(n!=0){
            int num = n%10;
            newNumber += num*num;
            n = n/10;
        }
        return newNumber;
    }
     bool isHappy(int n) {
        unordered_set<int> set;
        while(n!=1 && !set.count(n)){
            set.insert(n);
            n = nextNumber(n);
        }
        return n==1;
    }

int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int l,r;
 cin>>l>>r;
 vector<int>ans;
 for(int i=l;i<=r;i++)
 {
       if(isHappy(i)) 
       {
        ans.push_back(i);
       }
 }
 map<vector<int>,int>m;
 for(int i=0;i<ans.size();i++)
 {
    m[solve(ans[i])]++;
 }
 cout<<m.size()<<endl;
    return 0;
}