class Solution
{
  public:
  int maxWeightCell(int N, vector<int> e)
  {
      // code here
    //  vector<vector<int>>adj(N);
      vector<int>w(N,0);
      for(int i=0;i<e.size();i++)
      {
          //adj[i](e[i]);
          if(e[i]>=0)w[e[i]] +=i ;
          
      }
      // 2 0 0 
    // for(const auto&x:w)cout<< x << " ";
      //cout<<endl;
      int me=0;
      int ans=0;
      for(int i=0;i<w.size();i++)
      {
          if(me<w[i])
          {
              me = w[i];
              ans = i;
          }
          else if(me==w[i])
          {
              me = w[i];
              ans = max(ans,i);
          }
      }
      return ans;
      
      
      
      
  }
};
