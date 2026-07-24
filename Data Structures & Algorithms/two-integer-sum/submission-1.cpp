class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> num;int j=0;
      
        for (int i=0;i<nums.size();i++){
            int d=target-nums[i];
            if(num.find(d)!=num.end()&&num[d]!=i)
            return {num[d],i};
            else num[nums[i]]=i;
        }return {};
    }
};
