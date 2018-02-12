#ifndef RNG_H
#define RNG_H

#include <random>

class Rng
{
public:
    Rng(double min, double max);

    double operator()();

private:
    double min_;
    double max_;

    std::mt19937_64 generator_;
};

#endif // RNG_H
