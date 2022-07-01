// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    int first=-1, last=-1;
    int l=0, h=n-1;
    while(l<=h)
    {
        int mid= l+(h-l)/2;
        if (arr[mid]>x)
        {
            h=mid-1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            first=mid;
            h=mid-1;
        }
    }
    l=0, h=n-1;
    while(l<=h)
    {
        int mid= l+(h-l)/2;
        if (arr[mid]>x)
        {
            h=mid-1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            last=mid;
            l=mid+1;
        }
    }
    return {first,last};
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends