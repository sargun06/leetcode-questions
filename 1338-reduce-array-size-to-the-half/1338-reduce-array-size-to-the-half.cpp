class Solution {
public:
    int minSetSize(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=1;
        priority_queue <int> pq;
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i]==arr[i-1])
                count++;
            else
            {
                pq.push(count);
                count=1;
            }
        }
        pq.push(count);
        int half=(arr.size()+1)/2;
        int sum=0,ans=0;

        while(sum<half && !pq.empty())
        {
            sum+= pq.top();
            pq.pop();
            ans++;
        }
        return ans;
    }
};