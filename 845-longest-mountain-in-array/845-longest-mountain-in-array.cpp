class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int i=1;
        int ans=0;
        int n=arr.size();
        if(n<=2)
            return 0;
        while(i<arr.size())
        {
            int up=0, down=0;
                while(i<n && arr[i-1]<arr[i])
                {
                    up++;
                    i++;
                }
                while(i<n && arr[i-1]>arr[i] && up)
                {
                    i++;
                    down++;
                }
                if(up && down)
                    ans=max(ans,up+down+1);
                else
                    i++;
            
        }
        return ans;
    }
};