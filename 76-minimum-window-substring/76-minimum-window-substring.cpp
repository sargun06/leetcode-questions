class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0; i<t.size();i++)
        {
            mp[t[i]]++;
        }
        int j=0, i=0;
        string res="";
        int count=mp.size(), ans=INT_MAX;
        while(j<s.size())
        {
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]]==0) 
                    count--;
            }
            if(count>0) j++;
            else if(count==0)
            {
                if(j-i+1<ans)
                {
                    ans=j-i+1;
                    res=s.substr(i,ans);
                }
                
                while(count==0)
                {
                    if(mp.find(s[i])!=mp.end())
                    {
                        mp[s[i]]++;
                        if(mp[s[i]]>0)
                        {
                            i++;
                            count++;
                        }
                        else
                        {
                            i++;
                            if(j-i+1<ans)
                            {
                                ans=j-i+1;
                                res=s.substr(i,ans);
                            }
                        }
                    }
                    else
                    {
                        i++;
                        if(j-i+1<ans)
                        {
                            ans=j-i+1;
                            res=s.substr(i,ans);
                        }
                    }
                }
                j++;
            }
            
        }
            return res;
    }
};