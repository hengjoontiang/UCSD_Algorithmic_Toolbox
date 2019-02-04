#include "hiker.hpp"
#include <cassert>
#include <iostream>
//g++ hiker.o test_sample.cpp -o test_sample.out 
namespace {

    void life_the_universe_and_everthing()
    {
        assert(answer() == 54);
    }

    const char * green_traffic_light_pattern()
    {
        return "All tests passed";
    }
} // namespace

int main()
{
    life_the_universe_and_everthing();
    std::cout << green_traffic_light_pattern();
}
