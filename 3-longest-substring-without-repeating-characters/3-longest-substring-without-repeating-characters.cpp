class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0, maximum=0;
        unordered_map<char,int> map;
        for(int i=0; i<s.size(); i++)
        {
            if(map.find(s[i])!=map.end() && map[s[i]]>=start)
                start=map[s[i]]+1;
            map[s[i]]=i;
            maximum= max(maximum,(i-start+1));   
        }
        return maximum;
    }
};