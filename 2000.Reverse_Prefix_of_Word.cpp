#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

class Solution {
public:
	std::string reversePrefix(std::string word, char ch) 
	{
		int point = 0;
		for (int i = 0; i < word.size(); ++i)
		{
			if (word[i] == ch)
			{
				point = i;
				break;
			}
		}

		std::reverse(word.begin(), word.begin() + point + 1);

		return word;
	}
};

int main()
{
	Solution a;
	std::cout << a.reversePrefix("abcdefd", 'd');
}