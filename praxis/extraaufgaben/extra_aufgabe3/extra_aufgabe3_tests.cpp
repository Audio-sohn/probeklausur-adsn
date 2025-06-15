#include <catch2/catch_test_macros.hpp>

#include "extra_aufgabe3.h"

TEST_CASE("extra_aufgabe3")
{

    std::vector<int> list{5, 3, 8, 2, 7, 4};
    std::vector<int> expected{8, 7, 4}; 

    std::vector<int> result = getLeaders(list);

    REQUIRE(result == expected);
    
    list = {1, 2, 3, 4, 5};
    expected = {5};
    
    result = getLeaders(list);
    REQUIRE(result == expected);
    
    
    list = {5, 4, 3, 4, 1};
    expected = {5, 4, 4, 1};
    
    result = getLeaders(list);
    REQUIRE(result == expected);

}
