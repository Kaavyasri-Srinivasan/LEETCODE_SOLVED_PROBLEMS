using namespace std;
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>mask (n,0);
        for(int i=0;i<k;i++){
            mask[i]=1;
        }
        vector<vector<int>> result;
        vector<int> current;
        do{
            for(int i=0;i<n;i++){
                if(mask[i]==1){
                    current.push_back(i+1);
                }
                
            }
            result.push_back(current);
            current.clear();
        }while(prev_permutation(mask.begin(), mask.end()));
        return result;
    }
};
