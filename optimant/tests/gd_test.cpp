#include <iostream>

#include "gd.hpp"

#include "gtest/gtest.h"

using autodiff::base::var;

TEST(basic, gd) {
    std::array<var, 3> v = {var(9), var(2), var(100)};
    auto eqn = (v[0] - 10) * (v[0] - 10) + (v[1] - 6) * (v[1] - 6) + v[2] * (v[2] - 3); 
    auto min = gd<3>(v, eqn, 0.1, 100);
    ASSERT_NEAR(min[0], 10, 0.01);
    ASSERT_NEAR(min[1], 6, 0.01);
    ASSERT_NEAR(min[2], 1.5, 0.01);
}
