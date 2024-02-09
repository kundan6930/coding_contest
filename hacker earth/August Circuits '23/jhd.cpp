class Solution
{
    public:
    
    vector<int> z_function(vector<int>&s) {
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for(int i = 1; i < n; i++) {
        if(i < r) {
            z[i] = min(r - i, z[i - l]);
        }
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
        if(i + z[i] > r) {
            l = i;
            r = i + z[i];
        }
    }
    return z;
}
    vector<int> geeksJourney(vector<int>& geeksTown, int n, 
                             vector<int>& journey, int m, 
                             vector<vector<int>>& queries, int q)
    {
        vector<int>s=geeksTown;
        for(auto it:journey){
            s.push_back(it);
        }
        vector<int>temp=z_function(s);
        vector<int>v;
        int count=0;
       
        for(int i=n;i<temp.size();i++){
            
            if(temp[i]>=n)count++;
            v.push_back(count);
        }
      
        vector<int>ans;
        for(auto it:queries){
            int l=it[0],r=it[1];
            int left=0;
            if(l-1>=0)left=v[l-1];
            int right=0;
            if(r-n+1>=0)right=v[r-n+1];
           
            ans.push_back(max(0,right-left));
        }
        return ans;
        
    }
};