class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue <vector<int>> heap;
        for(int i=0; i<arr.size(); i++)
        {
            heap.push({abs(x-arr[i]),arr[i]});
            if(heap.size()>k)
            heap.pop();
        }
        vector<int> ar;
        for(int i=0; i<k; i++)
        {
            vector<int> result=heap.top();
            heap.pop();
            ar.push_back(result[1]);
        }
        sort(ar.begin(), ar.end());
        return ar;
    }
};