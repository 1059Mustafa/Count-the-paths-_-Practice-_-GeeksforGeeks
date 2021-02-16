class Solution {
public:

    void dfs(vector<int>v[], int n, int s, int d,int &c)
    {
        if(s==d)
        {
            c++;
            return;
        }
        for(int i=0;i<v[s].size();i++) 
        {
            dfs(v,n,v[s][i],d,c);
            
        }
        
    }
    
    int possible_paths(vector<vector<int>>edges, int n, int s, int d)
    {
    // Code here
        int c=0; //count
        vector<int>v[n]; //adjacency list
        for(int i=0;i<edges.size();i++) 
        {
            v[edges[i][0]].push_back(edges[i][1]);
            
        }
        
        dfs(v,n,s,d,c);
        
        return c;
        
    }
    
};


