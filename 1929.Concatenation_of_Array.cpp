#include<iostream>
#include<vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums)
    {
        std::vector<int> temp(2 * nums.size());

        for (int i = 0; i < nums.size(); ++i)
        {
            temp[i] = nums[i];
            temp[i + nums.size()] = nums[i];
        }
        return temp;
    }
};

int main()
{
    std::vector<int> a = { 1,2,1 };

    Solution b;
    std::vector<int> ab = b.getConcatenation(a);
    for (int x : ab)
    {
        std::cout << x << " ";
    }
}
