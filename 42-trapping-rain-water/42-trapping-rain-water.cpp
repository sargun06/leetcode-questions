class Solution {
public:
      
    int trap(vector<int>& height) {
        int n=height.size();
        int mleft[n];
        int mright[n];
        mleft[0]= height[0];
        mright[n-1]=height[n-1];
        for(int i=1; i<n; i++)
        {
            mleft[i]=max(mleft[i-1],height[i]);
            mright[n-i-1]=max(mright[n-i],height[n-i-1]);
        }
        int water=0;
         for(int i=0; i<n; i++)
        {
            water+= min(mright[i],mleft[i])-(height[i]);
        }
        return water;
    }
};