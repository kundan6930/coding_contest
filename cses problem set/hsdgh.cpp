#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(vector<int>arr, int n)
{
    int a[n];
    for(int i = 0; i < n; i++)
    {
        a[i] = 1;
    }
      
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
    
 if (abs(arr[i]) > abs(arr[j]) && abs(arr[i]) % 2 == 0 && abs(arr[j]) % 2 == 0 && a[i] < a[j] + 1)
  
  {
               a[i] = a[j] + 1;
  }
        }
    }
    int maxi = 0;
    for(int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
    }
   return maxi ;
}
int main (){
    int n;
    cin>>n;
 vector<int>a(n);
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 sort(a.begin(),a.end());
 cout<<solve(a,n)<<endl;
    return 0;
}