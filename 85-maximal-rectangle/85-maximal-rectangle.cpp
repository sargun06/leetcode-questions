class Solution {
public:
    
    int MAH(vector<int>& heights) {
        int n= heights.size();
        stack<int> st;
        int left[n], right[n];
        for(int i=0; i<n; i++)
        {
            while(!st.empty() && heights[i]<=heights[st.top()])
                st.pop();
        if(st.empty())
            left[i]=0;
        else
            left[i]=st.top()+1;
        st.push(i);
        }
        
        while(!st.empty())
            st.pop();
        int maxi=0;
        
        for(int i=n-1; i>=0; i--)
        {
            while(!st.empty() && heights[i]<=heights[st.top()])
                st.pop();
        if(st.empty())
            right[i]=n-1;
        else
            right[i]=st.top()-1;
        maxi=max(maxi,(heights[i]*(right[i]-left[i]+1)));
        st.push(i);
        }
        return maxi;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size(); //cols
        if(n == 0) return 0;

        int m=matrix[0].size(); //rows
        if(n + m == 2) return matrix[0][0] == '1';
                vector<int> temp(m,0);

        int maxim=0;
        for(int k=0; k<n; k++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[k][j]=='0')
                    temp[j]=0;
                else
                temp[j]++;
            }
                maxim=max(MAH(temp),maxim);
        }        
        return maxim;
    }
};