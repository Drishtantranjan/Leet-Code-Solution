class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>v;
         for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid[i].size();j++)
                {
                    v.push_back(grid[i][j]);
                }
            }
            
        k=k%v.size();
        while(k--)
        {
           
            int temp=v[v.size()-1];
            
            for(int i=v.size()-1;i>0;i--)
                v[i]=v[i-1];
            
            v[0]=temp;
            
            
        }
        int x=0,y=0;
    for(int i=0;i<v.size();i++)
    {
        grid[x][y++]=v[i];
        if(y==grid[0].size())
        {
            y=0;
            x++;
        }
        
    }
        return grid;
    }
};