#include <iostream>
#include <bitset>

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        std::bitset<32> bits(n);
        if (bits.count() == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};