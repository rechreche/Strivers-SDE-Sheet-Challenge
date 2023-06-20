bool searchMatrix(vector<vector<int>>& mat, int target) {

     int m=mat.size(),n=mat[0].size();

     if(target <mat[0][0] || target >mat[m-1][n-1])
     return false;

     for(int i=0;i<m;i++)
     {
         if(target> mat[i][n-1])
         continue;

         for(int j=0;j<n;j++)
         {
             if(mat[i][j] == target)
             return true;
         }
     } 
     return false;  
}
