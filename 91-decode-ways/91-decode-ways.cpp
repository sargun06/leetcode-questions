class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        int arr[n];
        if(s[0]=='0')
        arr[0]=0;
        else       
        arr[0]=1;
        for(int i=1; i<n; i++)
        {
            if(s[i-1]=='0' && s[i]=='0')
                arr[i]= 0;
            else if(s[i-1]=='0' && s[i]!='0')
                arr[i]= arr[i-1];
            else if((s[i-1]!='0') && s[i]=='0')
            {
                if(s[i-1]=='1' || s[i-1]=='2')
                {
                    int temp= (i!=1)? arr[i-2] : 1;
                    arr[i]= temp;
                }
                   else arr[i]=0;
            }
            else if((s[i-1]=='1' && s[i]!='0') || (s[i-1]=='2' && s[i]<='6'))
            {
                int temp= (i!=1)? arr[i-2] : 1;
                arr[i]=arr[i-1]+ temp;
            }
            else
                arr[i]=arr[i-1];
        }
        return arr[n-1];
    }
};