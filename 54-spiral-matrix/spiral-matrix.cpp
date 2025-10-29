class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int row=matrix.size(); 
        int col=matrix[0].size();

        int count=0;
        int total=row*col;

        int StartRow=0;
        int StartCol=0;
        int EndCol=col-1;
        int EndRow=row-1;

        while(count<total){
            //first row
            for(int idx=StartCol; idx<=EndCol && count < total; idx++){
                ans.push_back(matrix[StartRow][idx]);
                count++;
               
            }
             StartRow++;
            //end col
            for(int idx=StartRow; idx<=EndRow && count < total; idx++){
                ans.push_back(matrix[idx][EndCol]);
                count++;
            }
            EndCol--;
            //end row
            for(int idx=EndCol; idx>=StartCol && count < total; idx--){
                ans.push_back(matrix[EndRow][idx]);
                count++;
            }
            EndRow--;
            //start col
            for(int idx=EndRow; idx>=StartRow && count < total; idx--){
                ans.push_back(matrix[idx][StartCol]);
                count++;
            }
            StartCol++;
            


        }


        
        return ans;
        

    }
};