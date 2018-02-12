#include "Rng.h"

#include <chrono>
#include <iostream>
#include <limits>

Rng::Rng(double min, double max)
    : min_(min)
    , max_(max)
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    generator_ = std::mt19937_64(seed);  // mt19937 is a standard mersenne_twister_engine
}

double Rng::operator()()
{
    return generator_() * ((max_ - min_) / std::numeric_limits<std::uint_fast64_t>::max()) + min_;
}


