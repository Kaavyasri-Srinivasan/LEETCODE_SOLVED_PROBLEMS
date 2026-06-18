using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       int top=0;
       int bottom = n-1;
       int left=0;
       int right=n-1;
       int num=1;
       vector<vector<int>>generateMatrix(n, vector<int>(n,0));
       while((top<=bottom) and (left <=right))
       {
        for(int i=left; i<=right; i++){
            generateMatrix[top][i]=num++;
            cout<<num<<"\n";
        }
        top++;
        for(int i=top; i<=bottom;i++){
            generateMatrix[i][right]=num++;
            cout<<num<<"\n";
        }
        right--;
        
        for(int i=right; i>=left; i--){
            generateMatrix[bottom][i]=num++;
            cout<<num<<"\n";
        }
        
        bottom--;
        
        for(int i=bottom; i>=top; i--){
            generateMatrix[i][left]=num++;;
            cout<<num<<"\n";
        } 
        left++;
       }
       return generateMatrix; 
    }
};
