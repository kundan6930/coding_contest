void solve(vector<int>&arr, int n)
{
   for (int i=0; i<n/2; i++)
   {
     swap(arr[i], arr[n-i-1]);
   }
} 

solve(arr,n);
return arr;


  

