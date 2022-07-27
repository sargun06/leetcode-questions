class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0, h=letters.size()-1;
        char ch='0';
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(letters[mid]>target)
            {
                ch=letters[mid];
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(ch=='0')
            return letters[0];
        else
            return ch;
    }
};