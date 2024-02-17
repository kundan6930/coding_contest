#include <bits/stdc++.h>
using namespace std;
using ll=long long;
string solve3(vector<int>a)
{
for(int j=0;j<2;j++)
    {
     for(int i=0;i<=9;i++)
     {
        if(j==0)
        {
            // if(i==0)
            // {
            //     continue;
            // }
          int k=i*10+a[1];
          if(k%8==0)
          {
            string s;
          //  cout<<k<<endl;
            s=to_string(k);
            return s;
          }
        }
        else 
        {
          int k=a[0]*10+i*1;
          if(k%8==0)
          {
            string s;
            s=to_string(k);
           // cout<<k<<endl;
            return s;
          }
        }
       
    }
}
          for(int j=0;j<=9;j++)
        {
            for(int k=0;k<=9;k++)
            {
                 int k3=j*10+k; 
                 if(k3%8==0)
           {
            string s;
            s=to_string(k);
            return s;
           }
            }
        }
     return "";
}
string solve2(vector<int>a )
{
    for(int j=0;j<3;j++)
    {
     for(int i=0;i<=9;i++)
     {
        if(j==0)
        {
            // if(i==0)
            // {
            //     continue;
            // }
          int k=i*100+a[1]*10+a[2];
          if(k%8==0)
          {
            string s;
            s=to_string(k);
            return s;
          }
        }
        else if(j==1)
        {
          int k=a[0]*100+i*10+a[2];
          if(k%8==0)
          {
            string s;
            s=to_string(k);
            return s;
          }
        }
        else
        {
           int k=a[0]*100+a[1]*10+i;
          if(k%8==0)
          {
            string s;
            s=to_string(k);
            return s;
          }
        }
     }
    }
    for(int k=0;k<3;k++)
    {
        for(int k1=k+1;k1<3;k1++)
    {
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            // if(i==0 && k==0)
            // {
            //     continue;
            // }
           int p1=a[k];
           int p2=a[k1];
           a[k]=i;
           a[k1]=j;
           int k3=a[0]*100+a[1]*10+a[2];
           if(k3%8==0)
           {
             a[k]=p1;
             a[k1]=p2;
            string s;
            s=to_string(k);
            return s;
           }
        }
    }
    }
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=0;k=9;k++)
            {
                 int k3=i*100+j*10+k; 
                 if(k3%8==0)
           {
            string s;
            s=to_string(k);
            return s;
           }
            }
        }
    }
    return "";
}
string solve1(vector<int>a )
{
    for(int j=0;j<3;j++)
    {
     for(int i=0;i<=9;i++)
     {
        if(j==0)
        {
          int k=i*100+a[1]*10+a[2];
          if(k%8==0)
          {
            string s;
            s=to_string(k);
            return s;
          }
        }
        else if(j==1)
        {
          int k=a[0]*100+i*10+a[2];
          if(k%8==0)
          {
            string s;
            s=to_string(k);
            return s;
          }
        }
        else
        {
           int k=a[0]*100+a[1]*10+i;
          if(k%8==0)
          {
            string s;
            s=to_string(k);
            return s;
          }
        }
     }
    }
    for(int k=0;k<3;k++)
    {
        for(int k1=k+1;k1<3;k1++)
    {
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
           int p1=a[k];
           int p2=a[k1];
           a[k]=i;
           a[k1]=j;
           int k3=a[0]*100+a[1]*10+a[2];
           if(k3%8==0)
           {
             a[k]=p1;
             a[k1]=p2;
            string s;
            s=to_string(k);
            return s;
           }
        }
    }
    }
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=0;k<=9;k++)
            {
                 int k3=i*100+j*10+k; 
                 if(k3%8==0)
           {
            string s;
            s=to_string(k);
            return s;
           }
            }
        }
    }
    return "";
}
int solve(int n)
{
    int ans=1;
    for(int i=0;i<n;i++)
    {
          ans*=10;
    }
    return ans;
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
    if(n>=3)
    {
    vector<int>a;
    char a1,b1,c1;
    a1=s[n-3];
    b1=s[n-2];
    c1=s[n-1];
    int a2=a1-'0';
    int b2=b1-'0';
    int c2=c1-'0';
    a.push_back(a2);
    a.push_back(b2);
    a.push_back(c2);
   // cout<<a2<<" "<<b2<<" "<<c2<<endl;
    int k=0;
    for(int i=0;i<3;i++)
    {
       // cout<<a[i]<<endl;
       k+=((a[i])*solve(2-i));   
    }
  //  cout<<k<<endl;
    if(k%8==0)
    {
       cout<<s<<endl;
    }
    else if(n==3)
    {
        string s3=solve2(a);
       string ans;
       for(int i=0;i<n-3;i++)
       {
          ans+=s[i];
       }
       ans+=s3;
       cout<<ans<<endl;
    }
    else
    {
       string s3=solve1(a);
       string ans;
       for(int i=0;i<n-3;i++)
       {
          ans+=s[i];
       }
       ans+=s3;
       cout<<ans<<endl;
    }
    }
    else
    {
        if(n==1)
        {
            cout<<"8"<<endl;
        }
        else 
        {
            int k=stoi(s);
            if(k%8==0)
            {
                cout<<s<<endl;
            }
            else
            {
                vector<int>aa;
               int a4=k%10;
               k/=10;
               int a5=k%10;
               aa.push_back(a5);
               aa.push_back(a4);
                 string s3=solve3(aa);
         //  cout<<a4<<" "<<a5<<endl;
                cout<<s3<<endl;   
            }
        }
    
    }
 


}
    return 0;
}