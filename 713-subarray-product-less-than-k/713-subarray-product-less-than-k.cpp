class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int s=0, ans=0, prod=1;
        if(k==0)
            return 0;
        for(int end=0; end<nums.size(); end++)
        {
            prod*=nums[end];     
                while(prod>=k && s<end)
                {
                prod/=nums[s];
                s++;
                }       
            if(prod<k)
                ans+=end-s+1;
        }
    return ans;
    }
};