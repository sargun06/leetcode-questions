class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l=1; int r=1, maxi=nums[0];
        int n= nums.size();
        for(int i=0; i<n; i++)
        {
            l=l*nums[i];
            r=r*nums[n-i-1];    
            maxi=max(maxi,max(l,r));
            if(l==0)
                l=1;
            if(r==0)
                r=1;
        }
        return maxi;
    }
};