// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int sum=0, maxi=0;
        unordered_map<int,int> m;
        m[0]=-1;
        for(int i=0; i<n; i++)
        {
            sum+=A[i];
            if(m.find(sum)==m.end())
            m.insert({sum,i});
            else
                maxi=max(i-m[sum],maxi);
        }
        return maxi;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends