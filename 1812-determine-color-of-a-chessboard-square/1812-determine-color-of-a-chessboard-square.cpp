class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char ch=coordinates[0];
        int n= int(coordinates[1]);
        cout<<n;
        if(ch=='a' || ch=='c' || ch=='e' || ch=='g')
        {
            if(n%2==0)
            return true;
            else
            return false;
        }
        else
        {
            if(!(n%2==0))
                return true;
            else
            return false;
        }
    }
};