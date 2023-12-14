//!  2482. Difference Between Ones and Zeros in Row and Column





class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int rowsize=grid.size();
        int colsize=grid[0].size();
        vector<int>rows(rowsize,0);
        vector<int>cols(colsize,0);
        for(int i=0;i<rowsize;i++){
            for(int j=0;j<colsize;j++){
              if(grid[i][j]==0){
                  cols[j]--;
                  rows[i]--;
              }else{
                  cols[j]++;
                  rows[i]++;
              }
        }
    }
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            grid[i][j]=rows[i]+cols[j];
        }
    }
    return grid;

    }

};