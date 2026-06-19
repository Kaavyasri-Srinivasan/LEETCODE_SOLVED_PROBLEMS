class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto row: matrix){
            for(auto it: row){
                if(it == target){
                    return true;
                }
                else{
                    continue;
                }
            }
        }
        return false;
    }
};
