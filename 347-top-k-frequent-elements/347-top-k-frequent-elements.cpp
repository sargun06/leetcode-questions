class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> heap;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }

        for(auto j=m.begin(); j!=m.end(); j++)
        {
            heap.push({j->second,j->first}); 
            if(heap.size()>k)
                heap.pop();
        }
        vector<int> result;
        for(int j=0; j<k; j++)
        {
            result.push_back(heap.top().second);
            heap.pop();
        }
        return result;
    }
};