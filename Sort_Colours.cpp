class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len=nums.size();
        sort(nums.begin(), nums.end());
        for(auto it: nums){
            cout<<it;
        }
    }
};
