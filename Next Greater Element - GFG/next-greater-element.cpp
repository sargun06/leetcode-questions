// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> nums, int n){
        stack<long long> st;
        vector<long long> result(n,-1);
        for(int i=n-1; i>=0; i--)
        {
            if(st.empty())
                result[i]=-1;
            else
            {
                while(st.size()>0 && st.top()<nums[i])
                    st.pop();
                if(st.empty())
                    result[i]=-1;
                else
                    result[i]=st.top();
            }
            st.push(nums[i]);
        }
        return result;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends