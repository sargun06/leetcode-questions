// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
  
    // void solve(vector<int> &v, int k, int idx)
    // {
    //     if(v.size()==1)
    //     return;
        
    //     idx=(idx+k)%v.size();
    //     v.erase(v.begin()+idx);
    //     solve(v,k,idx);
    // }
    // int safePos(int n, int k) {
    //     // code here
    //     vector<int> v;
    //     for(int i=0;i<n;i++)
    //     v.push_back(i+1);
    //     solve(v,k-1,0);
    //     return v[0];
    // }
    int safePos(int n, int k) {
        if(n==1)
        return 1;
       int x=safePos(n-1,k); 
       return (x+k-1)%n+1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}  // } Driver Code Ends