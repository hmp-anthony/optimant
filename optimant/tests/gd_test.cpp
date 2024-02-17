#include <iostream>

#include "gd.hpp"

#include "gtest/gtest.h"

using autodiff::base::var;

TEST(basic, gd) {
    std::array<var, 2> v = {var(9), var(2)};
    auto eqn = v[0] * v[0] + v[1] * v[1];
    auto min = gd(v, eqn, 0.1, 100);
    ASSERT_NEAR(min[0], 0, 0.01);
    ASSERT_NEAR(min[1], 0, 0.01);
}
