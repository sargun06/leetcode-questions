class Solution {
public:
    int count(vector<string>& arr, int idx, vector<bool>& vis, int len)
    {
        if(idx>=arr.size())
        {
            return len;
        }
        
        bool flag=true;
        string arr2=arr[idx];
        vector<int> selfCheck(26, 0);
        for (int i=0 ; i<arr2.size() ; i++)
        {
            if (selfCheck[arr2[i]-'a']) 
                flag= false;
            selfCheck[arr2[i]-'a'] = 1;
        }
        
        for(int i=0;i<arr2.size();i++)
        {
            if(vis[(arr2[i]-'a')]) 
                flag= false;
        } 
        
        if(flag==false)
            return count(arr,idx+1,vis,len);
        
        for (int j=0 ; j<arr2.size() ; j++){
            vis[arr2[j]-'a'] = 1;
        }
        len += arr2.size();
        int op1 = count(arr, idx+1, vis, len);
        
        for (int j=0 ; j<arr2.size() ; j++){
            vis[arr2[j]-'a'] = 0;
        }
        len -= arr2.size();
        int op2 = count(arr, idx+1, vis, len);
        
        return max(op1, op2);
        
    }
    
    int maxLength(vector<string>& arr) {
        vector<bool> vis(26);
        return count(arr,0,vis,0);
    }
};