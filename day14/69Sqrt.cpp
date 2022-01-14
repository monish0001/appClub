class Solution {
public:
    int mySqrt(int x) {
        long long i = 1, mySqrt = 1;

    while (mySqrt <= x)
    {
        i++;
        mySqrt = i *1ll* i;
    }

    return i - 1;
    }
};