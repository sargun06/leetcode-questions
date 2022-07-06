// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int l=0, h=n-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(mid==0 || arr[mid-1]>arr[mid])
            return arr[mid];
            if(arr[mid]<arr[l])
            h=mid-1;
            else if(arr[h]<arr[mid])
            l=mid+1;
            else
            return arr[l];
        }
        return -1;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}  // } Driver Code Ends