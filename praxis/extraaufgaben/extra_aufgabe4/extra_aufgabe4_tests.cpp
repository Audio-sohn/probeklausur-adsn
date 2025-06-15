#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <catch2/catch_test_macros.hpp>
#include "extra_aufgabe4.h"



TEST_CASE("extra aufgabe 4")
{

    for (int i = 0; i < 1000; i++)
    {
        int k = (std::rand() % 99) + 1;
        auto vector = makeMissingNo(100, k);
        
        REQUIRE(findMissingNo(vector) == k);
    }
}