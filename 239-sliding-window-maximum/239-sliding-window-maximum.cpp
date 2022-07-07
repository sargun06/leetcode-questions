class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
         vector<int> ans;
        int i=0, j=0;
        deque<int> q;
        while(j<arr.size())
        {
            while(!q.empty() && q.back()<arr[j])
            q.pop_back();
            q.push_back(arr[j]);
            if(j-i+1<k) 
                j++;
            else
            {
                ans.push_back(q.front());
                if(arr[i]==q.front())
                q.pop_front();
                i++; j++;
            }
        }
        return ans;
    }
};