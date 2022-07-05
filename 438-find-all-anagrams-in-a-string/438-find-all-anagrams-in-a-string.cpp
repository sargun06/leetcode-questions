class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        unordered_map<int,int> mp;
	    for(int i=0; i<pat.size(); i++)
	    {
	        mp[pat[i]]++;
	    }
        vector<int> ans;
	    int i=0, j=0, size=pat.size(), count=mp.size();
	    while(j<txt.size())
	    {
	        if(mp.find(txt[j])!=mp.end())
	        {
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0)
	            count--;
	        }
	        if(j-i+1<size)
	        j++;
	        else if(j-i+1==size)
	        {
	            if(count==0)
	            ans.push_back(i);
	            if(mp.find(txt[i])!=mp.end())
	            {
	                mp[txt[i]]++;
	                if(mp[txt[i]]==1)
	                count++;
	            }
	        i++; j++;
	        }
	    }
	    return ans;
	}

    
};