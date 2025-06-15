#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>

std::vector<int> makeMissingNo(int n, int k)
{
    std::vector<int> result{};

    for (int i = 1; i <= n ; i++)
    {
        if (i == k)
        {
            continue;
        }
        result.push_back(i);
    }

    return result;
}

int findMissingNo(std::vector<int> vec)
{
    // measure size of vector, it should be n-1
    int n = vec.size() +1;
    
    // calculate complete sum using gauss formula
    int sum_com = (n*(n+1))/2;
    
    // calculate incomplete sum
    int sum_inc = std::accumulate(vec.begin(), vec.end(), 0);
    
    // return the difference
    return sum_com - sum_inc;

}
