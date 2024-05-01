#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

class Solution 
{
public:
	int countPairs(std::vector<int>& nums, int target)
	{
		int counter = 0;
		for (int i = 0; i < nums.size(); ++i)
		{
			for (int j = i + 1; j < nums.size(); ++j)
			{
				if ((nums[i] + nums[j]) < target)
				{
					counter++;
				}
			}
		}

		return counter;
	}
};

int main()
{
	std::vector<int> a = { -6,2,5,-2,-7,-1,3 };

	Solution b;
	std::cout << b.countPairs(a,-2);
}