class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=nums.size()-1,b=0;
        while(b<=l){
           int m=(b+l)/2;
           if(target==nums[m])return m;
          else  if(target<nums[m])l=m-1;
          else b=m+1;
        }return -1;
    }
};
