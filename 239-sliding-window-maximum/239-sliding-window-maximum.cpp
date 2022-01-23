class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        long long start=0, end=0, max=0;
        deque<long long> q;
        vector<int> ans;
        for(end=0; end<nums.size(); end++)
        {
            
                while(!q.empty() && nums[end]>q.front())
                q.pop_front();
            while(!q.empty() && q.back()<nums[end])
                q.pop_back();
            
            q.push_back(nums[end]);
            if((end-start+1)==k)
            {
                if(q.size()==0)
                ans.push_back(0);
                else
                {
                    
                ans.push_back(q.front());
                if(q.front()==nums[start])
                    q.pop_front();
                }
                start++;
            } 
        }
              return ans;
    }
};

