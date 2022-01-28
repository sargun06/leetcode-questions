// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    static bool comparison(Item a, Item b)
    {
        return ((double)a.value/a.weight)>((double)b.value/b.weight);
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,comparison);
        double prof=0;
        for(int i=0; i<n; i++)
        {
            if(W==0)
            break;
            if(W<=arr[i].weight)
            {
                prof+=((double)arr[i].value/arr[i].weight)*W;
                W=0;
            }
            if(W>arr[i].weight)
            {
                prof+=arr[i].value;
                W-=arr[i].weight;
            }
        }
        return prof;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends