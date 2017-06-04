#include "../semi-static-linear-solver.hpp"

#include <iostream>
#include <assert.h>

int main(){
    // semi-static Cramers tule based solution
    auto a = std::array<std::array<double, 3>, 3>{{{1.0, 0.0, 0.0}, {2.0, 1.0, 0.0}, {3.0, 2.0, 1.0}}};
    auto b = std::array<double, 3>{1.0, 4.0, 9.3};
    auto x = std::array<double, 3>{0.0, 0.0, 0.0};
    auto ss_solved = linear_equations::semi_static::solve<3>(a, b, x);
    auto ss_verified = linear_equations::verify<3>(a, b, x);
    assert(ss_solved);
    assert(ss_verified);

    std::cout << " + Linear equations solver is fine." << std::endl;
    return 0;
}
