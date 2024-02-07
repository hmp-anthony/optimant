#include <iostream>

#include "gd.hpp"

#include "gtest/gtest.h"

using autodiff::base::var;

TEST(basic, gd) {
    ASSERT_EQ(1, 1);
    var a(1);
    var b(2);

    auto c = (a + b) * b;

    fun_manip(a, c);
}
