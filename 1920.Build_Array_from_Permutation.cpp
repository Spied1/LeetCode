#include<iostream>
#include<vector>

class Solution
{
public:
    std::vector<int> buildArray(std::vector<int>& nums)
    {
        std::vector<int> temp(nums.size());
        for (int i = 0; i < nums.size(); ++i)
        {
            temp[i] = nums[nums[i]];
        }
        return temp;
    }
};

int main()
{
    
}
