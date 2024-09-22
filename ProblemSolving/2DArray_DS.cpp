#include<iostream>
#include<cstring>
#include<vector>

int main()
{
    std::vector<std::vector<int>> arr(6, std::vector<int>(6));
    std::vector<int> sum;
    
    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<6; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i<6; i++)
    {
        for(int j= 0; j<6; j++)
        {
            if(i<=3 && j<=3)
            {
                int hourglass = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
                 sum.push_back(hourglass);
            }
        }
    }
    
    int max = sum[0];
    for(auto element : sum)
    {
        if(element > max)
            max = element;
    }
    
    std::cout<< max;
}


