// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    // Your code goes here
    if(x==1) return 1;
    long long l=1,h=x/2;
    long long ans;
    while(l<=h)
    {
        long long mid=l+(h-l)/2;
        long long sqr=mid*mid;
        if(sqr>x)
        {
            h=mid-1;
        }
        else if(sqr<x)
        {
        ans=mid;
        l=mid+1;
        }
        else
        {
            return mid;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends