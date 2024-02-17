//output :- 1856
//#include <bits/stdc++.h>
 //using namespace std;
// using ll=long long;
// int main (){
// int a[6]={3,7,12,5,19,12};
// int ans=0;
// for(int i=0;i<(1<<6);i++)
// {
//     for(int j=0;j<6;j++)
//     {
//         if(i&1<<j)
//         {
//             ans+=a[j];
//         }
//     }
    
// }
// cout<<ans<<endl;
//     return 0;
// }
// output :-22
//     #include <bits/stdc++.h>
// using namespace std;
// using ll=long long;
// int main (){
// int a[9]={1,2,3,4,5,6,7,8,9};

// for(int i=0;i<(1<<9);i++)
// {int ans=0;
//     for(int j=0;j<9;j++)
//     {
//         if(i&(1<<j))
//         {
//             ans+=a[j];
//         }
     
//     }
//        if(i==327)
//        {
//         cout<<ans<<endl;
//        }
    
// }

//     return 0;
// }
  // output := 0, 3


// 38 78 49 43






































































#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int x=2;
int y=--x - ++x;
int z=y++;
cout<<z<<" "<<x+y<<endl;
    return 0;
}