#include<iostream>
#include<string>

std::string iS(int number)
{
    std::string answer;

    return answer = std::to_string(number);
}

bool isPalindrome(int x)
{
    std::string answer = std::to_string(x);

    for (int i = 0; i < answer.size() / 2; ++i)
    {
        if (answer[i] != answer[answer.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    std::cout << isPalindrome(1);
}