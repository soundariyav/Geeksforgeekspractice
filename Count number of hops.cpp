class Solution {
  public:
    map<int,int>memo;
    // Function to count the number of ways in which frog can reach the top.
    int countWays(int n) {
       return dp(0,n);
        // your code here
    }
    int dp(int x,int t)
    {
        if(x>t)return 0;
        if(x==t) 
        {
           return 1;
        }
        if(memo.find(x)!=memo.end())return memo[x];
        int res=0;
        
        
            res += dp(x+1,t);
            
            res += dp(x+2,t);

            res+= dp(x+3,t);
        
        return memo[x] = res;
    }
};
