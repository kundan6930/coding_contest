// 38 78 49 43
#include <bits/stdc++.h>
using namespace std;

int c;
int binarySearch(int a[], int l, int r, int x)
{
  
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        c+=1;
        cout << a[m] << " ";
        
        if (a[m] == x)
        {
            return m;
        }

      
        if (a[m] < x)
        {
            l = m + 1;
        }

        else
        {
            r = m - 1;
        }
    }
    cout<<endl;

   
    return -1;
}
int main(void)
{
c=0;
    int a[] = {20, 22, 25, 27, 32, 35, 37, 38, 43, 49, 67, 78, 84, 92, 98};
   // sort(a,a)
    int x = 43;
    int n = sizeof(a) / sizeof(a[0]);
    int result = binarySearch(a, 0, n - 1, x);
        cout<<endl<<c<<endl;
    return 0;
}