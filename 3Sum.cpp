#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        cout<<"length: "<<n<<"\n";
        set <vector<int>> target;
        vector <int> res;
        int i=0;
        int j,k;
        sort(nums.begin(), nums.end());
        for(auto it: nums){
            cout<<it<<"---->"<<endl;
        }
        while (i<n-2){
            j=i+1;
            while(j<n-1){
                k=j+1;
                while(k<n){
                    if(nums[i]+nums[j]+nums[k]==0){
                        res.push_back(nums[i]);
                        res.push_back(nums[j]);
                        res.push_back(nums[k]);
                        sort(res.begin(), res.end());
                        target.insert(res);
                        res.clear();
                        
                    }
                    k++;
                }
                j++;
            }
            i++;
        }


        vector<vector<int>> target1(target.begin(), target.end());
        return target1;
        
    }
};
