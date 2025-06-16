#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <catch2/catch_test_macros.hpp>
#include "extra_aufgabe5.h"


TEST_CASE("extra aufgabe 5")
{

    std::vector<int> list {1, 5, 2, 3, 4};
    std::vector<int> expected {5, 2, 3};
    int k {10};

    REQUIRE(findSummands(list, k) == expected);
    
    list = {1, 4, 3, 2, 5, 3};
    expected = {1, 4};
    k = 5;
    REQUIRE(findSummands(list, k) == expected);
    
    list = {1, 5, 6, 2, 4};
    expected = {5, 6, 2};
    k = 13;
    REQUIRE(findSummands(list, k) == expected);
    
    list = {1, 5, 6, 2, 4};
    expected = {};
    k = 23;
    REQUIRE(findSummands(list, k) == expected);

}