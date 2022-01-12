class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        sort(p.begin(), p.end());     
        vector<int> index;
        int cur=-2;
        if(s.length()<p.length())
           return index; 
        for(long long i=0; i<(s.length()-p.length()+1); i++)
        {     
            if (i > 0 and s[i-1]  == s[i + p.length() -1]) {
                
                if (cur == i-1) {
                    index.push_back(i);
                    cur = i;                  
                } 
                continue;
            }
                string temp= s.substr(i, (p.length()));
                cout<<temp<<" ";
                sort(temp.begin(), temp.end());
                if(temp==p)
                {
                    index.push_back(i); 
                    cur=i;
                }
        }
        return index;
    }
};