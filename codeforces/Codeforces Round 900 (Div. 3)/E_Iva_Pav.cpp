#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(vector<int>a,int k,int l)
{
    int n=a.size();
    int i=l,j=n-1;
    int ans=-1;
    while(i<=j)
    {
        int m=(i+j)/2;
        if(a[m]<=k)
        {
           ans=m;
           i=m+1;
        }
        else{
              j=m-1;
        }

    }
    return ans;

}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<int>a(n);
   // cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       // cout<<a[i]<<" "<<n<<endl;
    }
    vector<vector<int>>b(32,vector<int>(n+1));
    for(int i=0;i<32;i++)
    {
        for(int j=1;j<=n;j++)
        {
             int k1=(a[j-1]>>i)&1;
             
             if(k1==0)
             {
                b[31-i][j]=1;
             }  
           //  cout<<k<<" "<<b[i][31-j]<<endl;
        }
    }
     vector<vector<int>>pre(32,vector<int>(n+1));
    for(int i=0;i<32;i++)
    {
        int s=0;
        for(int j=0;j<=n;j++)
        {
            s+=b[i][j];
            pre[i][j]=s; 
        }
    }
    
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int l,k;
        cin>>l>>k;
      //  cout<<k<<" "<<l<<endl;
        int car=0,car1=0,f=0,maxi=-1,maxi1=INT_MAX,maxi2=INT_MAX,maxi3=INT_MAX;
        int one=0;
        for(int j=0;j<32;j++)
        {
            int k2=(k>>(31-j))&1;
            if(k2==1)
            {
                one=1;
            }
           vector<int>ab=pre[j];
        //   cout<<31-j<<endl;
            //  for(int p1=0;p1<=n;p1++)
            //  {
            //        cout<<pre[j][p1]<<" ";
            //  }
            // cout<<endl;
            int c1=pre[j][l-1];
           // cout<<c1<<" "<<k2<<" "<<31-j<<" "<<i<<endl;
           int it= solve(pre[j],c1,l);
         //  cout<<c1<<" "<<k2<<" "<<31-j<<" "<<i<<" "<<it<<"*"<<endl;
        // cout<<it<<" "<<one<<" "<<31-j<<" "<<it<<" "<<k2<<endl;
         if(it!=-1 && one==0)
         {
                  maxi=max(maxi,it);
         }
         else if(one==1)
         {
            if((it==-1 && k2 )) //|| (it!=-1 && k2==0))
            {
                if(car!=0)
                {
                   maxi1=min(maxi1,maxi2);
                   
                }
                else if(car1!=0)
                {
                     maxi1=min(maxi1,maxi3);
                   
                }
                else
                {
                           f=1;
                        break;
                 }
            }
            else
            {
                if(it==-1 && k2==0)
                {
                  maxi1=min(maxi1,(int)n);
                }
                else if(it!=-1 && k2==1)
                {
                      maxi1=min(maxi1,it);
                }
               else
               {
                    
              //     
                   if(it>=maxi1)
                   {
                      car++;
                       maxi2=min(maxi2,it);
                       maxi1=min(maxi1,(int)n); 
                   } 
                   else{
                        car1++;
                        maxi3=min(maxi3,it);
                        maxi1=min(maxi1,(int)n); 
                   }
                   
                }
            }
         }
       
        }
        int maxi4=maxi;
        if(f==0)
        {
            maxi4=max(maxi,maxi1);
        }
        if(one==0)
        {
            cout<<n<<" ";
        }
        else if(f==1 && maxi==-1)
        {
            cout<<"-1"<<" ";
        }
        
        // else if(f==1)
        // {
        //     cout<<ans<<" ";
        // }
        else{
                 cout<<maxi4<<" ";
        }
       
       // cout<<endl;
    }
    cout<<endl;
    // for(int i=0;i<32;i++)
    // {
    //     for(int j=0;j<=n;j++)
    //     {   
    //         cout<<pre[i][j]<<" "; 
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


}
    return 0;
}