class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();  
        sort(nums.begin() , nums.end());  // sort the array to use the two pointers method
        vector<vector<int>> ans;  
		
        for(int i = 0 ; i < n; i++)
        {
            for(int j = i + 1; j < n ; j++)
            {
                int target_new=target-nums[i]-nums[j];
			    int front= j+1, back=n-1;
                while(front<back)
                {
                    int sum=nums[front]+nums[back];
                    if(sum<target_new)
                        front++;
                    else if(sum>target_new)
                        back--;
                    else
                    {
                        ans.push_back({nums[i],nums[j],nums[front],nums[back]});
                        
                        while(front<back && nums[front]==nums[front+1])
                            front++;
                        front++;
                        while(front<back && nums[back]==nums[back-1])
                            back--;
                        back--;
                    }
                }
            while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
        while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
		
        return ans;
    }
};