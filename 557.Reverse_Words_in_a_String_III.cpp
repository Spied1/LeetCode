#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


class Solution {
public:



	std::string reverseWords(std::string s)
	{
		int first = 0;
		std::vector<size_t> point;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == ' ')
			{
				std::reverse(s.begin() + first, s.begin() + i);
				first = i + 1;
				//break;
			}
		}
		std::reverse(s.begin() + first, s.end());
		//std::cout << std::endl << s.size();
		return s;
	}
};

int main()
{
	Solution a;
	std::cout << a.reverseWords("Let's take LeetCode contest");
}