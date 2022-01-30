class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        set<int> s(nums.begin(), nums.end());
        int maxi=0, cnt;
        for(int i=0; i<nums.size(); i++)
        {
            if(!s.count(nums[i]-1))
            {
                cnt=1;
                int j=nums[i];
                while(s.count(j+1)){
                    cnt++;j++;
                }
            }
            cout<<cnt<<" ";
            maxi= max(maxi,cnt);
        }
        return maxi;
    }
};