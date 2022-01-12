class Solution {
public:
    int nthUglyNumber(int n) {
        int ugly[n];
        int x=1;
        ugly[0]=x;
        int i2=0, i3=0, i5=0; 
        int nxt2=ugly[i2]*2;
        int nxt3=ugly[i3]*3;
        int nxt5=ugly[i5]*5;
        for (int i = 1; i < n; i++) 
        { 
            x= min(nxt2,min(nxt3,nxt5));
            ugly[i] = x;
            if (x == nxt2) {
                i2++;
                nxt2 = ugly[i2] * 2;
            }
            if (x == nxt3) {
                i3++;
                nxt3 = ugly[i3] * 3;
            }
            if (x == nxt5) {
                i5++;
                nxt5 = ugly[i5] * 5;
            }
        }
    return ugly[n-1];
    }
};