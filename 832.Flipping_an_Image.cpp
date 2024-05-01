#include<iostream>
#include<vector>
class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector< std::vector<int>>& image) 
    {
        for (int i = 0; i < image.size(); ++i)
        {
            std::reverse(image[i].begin(), image[i].end());
        }

        for (int i = 0; i < image.size(); ++i)
        {
            for (int j = 0; j < image.size(); ++j)
            {
                if (image[i][j] == 1)
                {
                    image[i][j] = 0;
                }
                else
                {
                    image[i][j] = 1;
                }
            }
        }

        

        return image;
    }
};


int main()
{
    Solution a;
    std::vector<std::vector<int>> b = { {1, 1, 0},{1, 0, 1},{0, 0, 0 }
    };
    b = a.flipAndInvertImage(b);

    for (int i = 0; i < b.size(); ++i)
    {
        for (int j = 0; j < b[i].size(); ++j)
        {
            std::cout << b[i][j] << " ";
        }
        std::cout << std::endl;
    }
}