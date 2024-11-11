class Solution {
  public:
    // Function to find triplets with zero sum.
    bool findTriplets(vector<int> &arr) {
        map<int,vector<pair<int,int>>>mp;
        set<vector<int>>s;
        // code here
        for(int i=0;i<arr.size()-1;i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                mp[arr[i]+arr[j]].push_back({i,j});
            }
        }
        // we are going to calculate the third variable difference
        
        for(int k=0;k<arr.size();k++)
        {
             vector<int>curr;
             int rem = -arr[k];
             if(mp.find(rem)!=mp.end())
             {
                 vector<pair<int,int>>pairs = mp[rem];
                 // iterate the pairs to check if the indixes are unique;
                 for(auto p : pairs)
                 {
                     if(p.first!=k && p.second!=k)
                     {
                        return true;
                     }
                 }
             }
        }
       // vector<vector<int,int>>res(s.begin(),s.end());
        return false ;
    }
};
