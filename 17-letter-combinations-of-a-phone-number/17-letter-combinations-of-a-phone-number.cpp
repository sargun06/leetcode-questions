class Solution {
public:
    
    void combine(unordered_map<char,string>& map, string & digits, string & temp, vector<string> & ans, int idx)
    {
        if(idx==digits.size())
        {
            if(!temp.empty())
            ans.push_back(temp);
            return;
        }
        string str=map[digits[idx]];
        for(int i=0; i<str.size(); i++)
        {
            temp.push_back(str[i]);
            combine(map,digits,temp,ans,idx+1);
            temp.pop_back();
        }
    }


    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> map;
        map['2']="abc";
        map['3']="def";
        map['4']="ghi";
        map['5']="jkl";
        map['6']="mno";
        map['7']="pqrs";
        map['8']="tuv";
        map['9']="wxyz";
        string temp;
        vector<string> ans;
        combine(map, digits, temp, ans, 0);
        return ans;
    }
};