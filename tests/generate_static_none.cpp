#include "../semi_static_linear_solver.hpp"

#include <iostream>
#include <assert.h>

int main(int argc, char**){
    // semi-static Cramers tule based solution
    auto a = std::array<std::array<double, 3>, 3>{{{1.0, 0.0, 0.0}, {2.0, 1.0, 0.0}, {3.0, 2.0, 1.0}}};
    auto b = std::array<double, 3>{1.0, 4.0, 9.3};
    auto x = std::array<double, 3>{0.0, 0.0, 0.0};
    a[0][0] += static_cast<double>(argc - 1); // side effect to prevent optimization
    a[0][1] += static_cast<double>(argc - 1); // side effect to prevent optimization
    a[0][2] += static_cast<double>(argc - 1); // side effect to prevent optimization
    a[1][0] += static_cast<double>(argc - 1); // side effect to prevent optimization
    a[1][1] += static_cast<double>(argc - 1); // side effect to prevent optimization
    a[1][2] += static_cast<double>(argc - 1); // side effect to prevent optimization
    a[2][0] += static_cast<double>(argc - 1); // side effect to prevent optimization
    a[2][1] += static_cast<double>(argc - 1); // side effect to prevent optimization
    a[2][2] += static_cast<double>(argc - 1); // side effect to prevent optimization
    b[0] += static_cast<double>(argc - 1); // side effect to prevent optimization
    b[1] += static_cast<double>(argc - 1); // side effect to prevent optimization
    b[2] += static_cast<double>(argc - 1); // side effect to prevent optimization
    auto ss_solved = linear_equations::semi_static::solve<3>(a, b, x);
    assert(ss_solved);

    std::cout << "Side effect - X output: " << x[0] << " " << x[1] << " " << x[2] << std::endl;
    return 0;
}
