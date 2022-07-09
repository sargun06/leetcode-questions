class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> x(n,0);
        for(int i=0;i<n; i++)
        {
            x[nums[i]]++;
            if(x[nums[i]]>1)
                return nums[i];
        }
        return x[0];
    }
};