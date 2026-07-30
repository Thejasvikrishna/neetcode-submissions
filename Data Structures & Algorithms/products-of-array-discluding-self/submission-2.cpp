class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
   vector<int>sel;
   int pro=1,l=nums.size(),count=0;
   for (int i=0;i<l;i++)if (nums[i]==0){count++;if(count==l||count >1)pro=0;}else pro=pro*nums[i];
   for (int i=0;i<l;i++)
   if(count>0 )
   {if (nums[i]==0)sel.push_back(pro);
   else sel.push_back(0);}
   else sel.push_back(pro/nums[i]);
   return sel;

    }
};
