class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int count = 1, m = 1;

        for (int i = 0; i <(int) nums.size() - 1; i++) {
            if (nums[i] + 1 == nums[i + 1]) {
                count++;
            }
            else if (nums[i] == nums[i + 1]) {
                continue;   // duplicate
            }
            else {
                m = max(m, count);
                count = 1;
            }
        }

        return max(m, count);
    }
};