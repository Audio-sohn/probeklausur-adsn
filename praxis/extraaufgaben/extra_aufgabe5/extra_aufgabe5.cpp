#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>
#include "extra_aufgabe5.h"


std::vector<int> findSummands(std::vector<int> vec, int k)
{

    auto end = vec.begin();
    auto start = vec.begin();
    int sum = 0;

    std::vector<int> result{};

    while(end < vec.end())
    {

        if (sum < k)
        {
            sum += *end;
            result.push_back(*end);
            end++;
            continue;
        }
        if (sum > k)
        {
            sum -= *start;
            result.erase(result.begin());
            start++;
            continue;
        }
        if (sum == k)
        {
            return result;
        }
        
    }

    return {};

}
