class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>res;
        set <vector<int>> target_set;
        for(int i=0;i<n-3;i++){
            for(int j=i+1; j<n-2;j++){
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=(long long)(nums[i])+(long long)(nums[j])+(long long)(nums[k])+(long long)(nums[l]);
                    if(sum==target){
                        res.push_back(nums[i]);
                        res.push_back(nums[j]);
                        res.push_back(nums[k]);
                        res.push_back(nums[l]);
                        target_set.insert(res);
                        res.clear();
                        k++;
                        l--;
                    }
                    else if(sum <target){
                        k++;
                    }
                    else if(sum >target){
                        l--;
                    }
                }

            }
        }
        vector<vector<int>>result(target_set.begin(), target_set.end());
        return result;
    }
};
