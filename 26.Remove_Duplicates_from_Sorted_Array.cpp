#include<iostream>
#include<vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums)
    {
        int k = nums.size();
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size();)
            {
                if (nums[i] == nums[j])
                {
                    nums.erase(nums.begin() + j);
                    k--;
                }
                else
                {
                    ++j;
                }
            }
        }
        return k;
    }
};

int main()
{
    std::vector<int> k = { 0,0,1,1,1,2,2,3,3,4 };
    Solution sol;
    sol.removeDuplicates(k);
    for (int x : k)
    {
        std::cout << x << " ";
    }
}