#include<iostream>
#include<string>
class Solution {
public:
    int scoreOfString(std::string s)
    {
        int sum = 0;
        for (int i = 0; i < s.size() - 1; ++i)
        {
            //std::cout << int(s[i]) << " " << int(s[i + 1]) << std::endl;
            sum += abs(int(s[i]) - int(s[i + 1]));
            std::cout << sum << std::endl;
            //sum += s[i] - s[i + 1];
        }

        return sum;
    }
};

int main()
{
    std::string a = "hello";

    Solution b;
    std::cout << b.scoreOfString(a);
}
